/// mahbubur hasan er boi theke code. 181 page.
/// geeks for geeks er youtube video tutorial dekhe bujha.

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector <int> adj[100];
int edge[100];
int visit[100];

void DFS(int x)
{
    stack <int> s;
    s.push(x);
    visit[x] = 1;
    while(!s.empty()){
        int u = s.top();
        s.pop();
      //  cout << u << " ";
        while(edge[u] < adj[u].size()){
            int v = adj[u][edge[u]];
            edge[u]++;
            if(visit[v] == 0){
                visit[v] = 1;
                s.push(u), s.push(v);
                cout << v << " ";
                break;
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
    //  adj[a].push_back(b);
    }
    DFS(1);     // starting vertex  // BFS(1); mane 1 theke shuru hobe

    return 0;
}

/// 2 4 6 5 3
