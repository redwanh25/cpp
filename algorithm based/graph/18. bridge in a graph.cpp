#include <iostream>
#include <vector>
using namespace std;

vector <int> adj[100];
int vis[100], parent[100], low[100], disc[100], time;
int nd, eg;

void bridge(int u)
{
    vis[u] = 1;
    disc[u] = low[u] = ++time;

    for(int i = 0; i < adj[u].size(); i++){
        int v = adj[u][i];
        if(vis[v] == 0){
            parent[v] = u;

            bridge(v);

            low[u] = min(low[v], low[u]);
            if(low[v] > disc[u]){
                cout << v << " --- " << u << endl;
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
    cout << "bridge : " << endl;

    bridge(1);

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
