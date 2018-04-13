#include <iostream>
#include <vector>
#include <set>
#include <cstring>
using namespace std;

vector <int> adj[100];
set <int> s, res;
int vis[100], parent[100], disc[100], low[100], time;
int eg, nd;

void tarjan(int u)
{
    int child = 0;
    vis[u] = 1;
    disc[u] = low[u] = ++time;

    for(int i = 0; i < adj[u].size(); i++){
        int v = adj[u][i];
        if(vis[v] == 0){
            child++;
            parent[v] = u;

            tarjan(v);

            low[u] = min(low[v], low[u]);
            if(parent[u] == -1 && child >= 2){
                res.insert(u);
            }
            if(parent[u] != -1 && low[v] >= disc[u]){
                res.insert(u);
            }
        }
        else if(v != parent[u]){
            low[u] = min(low[u], disc[v]);
        }
    }
}

int main()
{
    int a, b;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(parent, -1, sizeof(parent));
    tarjan(1);

    cout << "articulation point : ";
    for(auto it = res.begin(); it != res.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

/*

6 6
0 1
1 2
1 5
5 3
3 2
3 4

8 9
1 2
1 3
2 3
3 4
4 5
5 6
5 7
7 6
6 8

*/
