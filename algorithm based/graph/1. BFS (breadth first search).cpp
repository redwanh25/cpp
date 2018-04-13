/// mahbubur hasan er boi theke code. 178 page.
/// geeks for geeks er youtube video tutorial dekhe bujha.
/// this algorithm does not work any weighted value

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> adj[100];
int visit[100];     // 0 if not visited. 1 if visited.

void BFS(int x)
{
    queue <int> q;
    q.push(x);
    visit[x] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int i = 0; i < adj[u].size(); i++){
            if(visit[adj[u][i]] == 0){
                int v = adj[u][i];
                visit[v] = 1;
                q.push(v);

//              visit[adj[u][i]] = 1;
//              q.push(adj[u][i]);
            }
        }
    }
}

int main()
{
    int edge, a, b;
    cin >> edge;
    for(int i = 0; i < edge; i++){
        cin >> a >> b;

    /// undirected graph
        adj[a].push_back(b);
        adj[b].push_back(a);

    /// directed graph
//      adj[a].push_back(b);
    }
    BFS(1);     // starting vertex  // BFS(1); mane 1 theke shuru hobe

    return 0;
}

/*
input:
8
1 2
1 3
2 4
3 5
2 5
6 4
5 6
4 5

output: 1 2 3 4 5 6

undirected
11
1 2
1 3
1 4
2 3
3 4
3 5
4 6
4 5
5 7
6 7
2 5

directed
11
1 2
1 4
3 1
2 3
3 4
3 5
5 2
4 5
4 6
5 7
6 7
*/
