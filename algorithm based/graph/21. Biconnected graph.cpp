#include <iostream>
#include <vector>
#include <set>
#include <cstring>
using namespace std;

vector <int> adj[100];
set <int> s;
int vis[100], parent[100], disc[100], low[100], time;

bool biconnected_graph(int u)
{
    int child = 0;
    disc[u] = low[u] = ++time;
    vis[u] = 1;

    for(int i = 0; i < adj[u].size(); i++){
        int v = adj[u][i];
        if(vis[v] == 0){
            child++;
            parent[v] = u;

            if(biconnected_graph(v) == true){
                return true;
            }
            low[u] = min(low[v], low[u]);

            if(parent[u] == -1 && child >= 2){
                return true;
            }
            if(parent[u] != -1 && low[v] >= disc[u]){
                return true;
            }
        }
        else if(v != parent[u]){
            low[u] = min(low[u], disc[v]);
        }
    }
    return false;
}

int main()
{
    int nd, eg, a, b;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

        s.insert(a);
        s.insert(b);
    }
    memset(parent, -1, sizeof(parent));

    if(biconnected_graph(*s.begin()) == true){
        cout << "NO" << endl;
    }
    else{
        for(auto it = s.begin(); it != s.end(); it++){
            if(vis[*it] == 0){      // check whether the given graph is connected or not
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }

    return 0;
}
