/// code collected from geeksforgeeks
/// tracing tushar ray

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int residual[100][100];
int vis[100];
int parent[100];
int nd, eg, wt, src, dst;

bool BFS()
{
    memset(vis, 0, sizeof(vis));
    queue <int> q;
    q.push(src);
    vis[src] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v = 0; v < nd; v++){
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

int max_flow()
{
    int Max = 0;
    while(BFS()){
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
        Max += flow;
    }
    return Max;
}

int main()
{
    int a, b;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b >> wt;
        residual[a][b] = wt;    // create adjacency matrix
    }
    cin >> src >> dst;
    int res = max_flow();
    cout << "Max = " << res << endl;

    return 0;
}

/*

6 10
0 1 16
0 2 13
1 2 10
2 1 4
1 3 12
3 2 9
2 4 14
4 3 7
3 5 20
4 5 4
0 5

7 11
1 2 3
5 2 1
2 3 4
3 1 3
1 4 3
3 4 1
3 5 2
4 5 2
6 7 9
5 7 1
4 6 6
1 7

4 5
7 9 2
7 8 2
7 11 1
11 8 2
8 9 4
7 9

maximum bipartite matching
10 13
0 1 1
0 2 1
0 3 1
0 4 1
1 5 1
1 6 1
2 6 1
3 6 1
3 7 1
4 7 1
5 10 1
6 10 1
7 10 1
0 10
Max = 3

*/
