#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

vector <int> adj[100];
int vis[100];
int edge[100];

void BFS(int x)
{
    queue <int> q;
    q.push(x);
    vis[x] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int i = 0; i < adj[u].size(); i++){
            if(vis[adj[u][i]] == 0){
                int v = adj[u][i];
                vis[v] = 1;
                q.push(v);
            }
        }
    }
    cout << endl;
}

void DFS(int x)
{
    stack <int> s;
    s.push(x);
    vis[x] = 1;
    while(!s.empty()){
        int u = s.top();
        s.pop();
        while(edge[u] < adj[u].size()){
            int v = adj[u][edge[u]];
            edge[u]++;
            if(vis[v] == 0){
                vis[v] = 1;
                s.push(u), s.push(v);
                cout << v << " ";
                break;
            }
        }
    }
    cout << endl;
}

void DFS_recursive(int x)
{
    vis[x] = 1;
    cout << x << " ";
    for(int i = 0; i < adj[x].size(); i++){
        if(vis[adj[x][i]] == 0){
            DFS_recursive(adj[x][i]);
        }
    }
}

int main()
{
    int edge, a, b;
    cin >> edge;
    for(int i = 0; i < edge; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
//    BFS(1);
//  DFS(1);
  DFS_recursive(1);
    return 0;
}

