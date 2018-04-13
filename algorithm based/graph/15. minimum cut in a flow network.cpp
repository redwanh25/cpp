#include <iostream>
#include <set>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int graph[100][100], residual[100][100];
int vis[100], parent[100], Max, Min = INT_MAX, src, dst;

bool bfs()
{
    memset(vis, 0, sizeof(vis));
    queue <int> q;
    q.push(src);
    vis[src] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v = Min;  v <= Max; v++){
            if(vis[v] == 0 && residual[u][v] > 0){
                q.push(v);
                parent[v] = u;
                vis[v] = 1;
                if(vis[dst] == 1){
                    return true;
                }
            }
        }
    }
    return false;
}

void dfs(int u)
{
    vis[u] = 1;
    for(int v = Min; v <= Max; v++){
        if(vis[v] == 0 && residual[u][v] > 0){
            dfs(v);
        }
    }
}

int min_cut()
{
    int max_flow = 0;
    while(bfs()){
        int flow = INT_MAX;
        for(int v = dst; v != src; v = parent[v]){
            int u = parent[v];
            flow = min(flow, residual[u][v]);
        }
        for(int v = dst; v != src; v = parent[v]){
            int u = parent[v];
            residual[u][v] -= flow;
            residual[v][u] += flow;
        }
        max_flow += flow;
    }

    memset(vis, 0, sizeof(vis));
    dfs(src);

    cout << endl << "Minimum cut :" << endl;
    for(int u = Min; u <= Max; u++){
        for(int v = Min; v <= Max; v++){
            if(vis[u] == 1 && vis[v] == 0 && graph[u][v] > 0){
                cout << u << " -- " << v << endl;
            }
        }
    }
    return max_flow;
}

int main()
{
    int nd, eg, a, b, wt;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b >> wt;
        Min = min(Min, min(a, b));
        Max = max(Max, max(a, b));
        graph[a][b] = wt;
        residual[a][b] = wt;
    }
    cin >> src >> dst;
    cout << endl << min_cut() << endl;
    return 0;
}
