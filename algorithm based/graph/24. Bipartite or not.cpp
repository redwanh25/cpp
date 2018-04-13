#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <cstring>
using namespace std;

vector <int> adj[100];
set <int> s;
int vis[100], color[100];

bool bipartite(int u)
{
    queue <int> q;
    q.push(u);
    color[u] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0; i < adj[u].size(); i++){
            int v = adj[u][i];

            if(u == v){
                return false;
            }
            else if(color[v] == -1){    // if it is not visited...
                color[v] = 1 - color[u];
                q.push(v);
            }
            else if(color[u] == color[v]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int nd, eg, a, b;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(color, -1, sizeof(color));

    if(bipartite(1)){
        cout << "Bipartite..." << endl;
    }
    else{
        cout << "Not Bipartite..." << endl;
    }

    return 0;
}

/*

4 4
0 1
1 2
2 3
0 3

4 5
0 1
1 2
2 3
0 3
0 2
*/
