/// mahbubur hasan er boi theke code. 180 page.

#include <iostream>
#include <vector>
using namespace std;

vector <int> adj[100];
int visit[100];

void DFS(int x)
{
    visit[x] = 1;
    cout << x << " ";
    for(int i = 0; i < adj[x].size(); i++){
        if(visit[adj[x][i]] == 0){
            DFS(adj[x][i]);
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
    //  v[a].push_back(b);
    }
    DFS(1);     // starting vertex  // BFS(1); mane 1 theke shuru hobe

    return 0;
}

/*
7
1 2
1 5
2 3
2 5
3 4
4 5
4 6

*/
