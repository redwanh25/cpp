#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <cstring>
using namespace std;

vector <int> adj[100], adj_t[100];
stack <int> s;
set <int> in;
int vis[100], eg, nd, cnt;

void dfs(int v)
{
    vis[v] = 1;
    cout << v << " ";
    for(int i = 0; i < adj_t[v].size(); i++){
        if(vis[adj_t[v][i]] == 0){
            dfs(adj_t[v][i]);
        }
    }
}

void dfs_TSort(int v)
{
    vis[v] = 1;
    for(int i = 0; i < adj[v].size(); i++){
        if(vis[adj[v][i]] == 0){
            dfs_TSort(adj[v][i]);
        }
    }
    s.push(v);
}
/*
void graph_transpose()
{
    for(auto it1 = in.begin(); it1 != in.end(); it1++){
        for(auto it2 = adj[*it1].begin(); it2 < adj[*it1].end(); it2++){
            adj_t[*it2].push_back(*it1);
        }
    }
}
*/
void scc()
{
    for(auto it = in.begin(); it != in.end(); it++){
        if(vis[*it] == 0){
            dfs_TSort(*it);
        }
    }
/// graph_transpose();

    memset(vis, 0, sizeof(vis));

    cout << endl << "strongly connected component" << endl;
    while(!s.empty()){
        int u = s.top();
        s.pop();
        if(vis[u] == 0){
            dfs(u);
            cout << endl;
            cnt++;
        }
    }
    cout << "number of strongly connected component : " << cnt << endl;
}

int main()
{
    int a, b;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj_t[b].push_back(a);      /// Graph transpose just 1 line. :-)

        in.insert(a);
        in.insert(b);
    }
    scc();
    return 0;
}

/*

9 10
0 1
1 2
2 3
3 0
2 4
4 5
5 6
6 4
7 6
7 8

4 6
0 1
0 2
1 2
2 3
0 3
3 0


*/
