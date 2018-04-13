#include <iostream>
#include <vector>
#include <stack>
#include <set>
using namespace std;

vector <int> adj[1000];
stack <int> s;
int vis[1000];

void topological_sort(int v)
{
    vis[v] = 1;
    for(int i = 0; i < adj[v].size(); i++){
        if(vis[adj[v][i]] == 0){
            topological_sort(adj[v][i]);
        }
    }
    s.push(v);
}

int main()
{
    set <int> in;
    int node, edge, a, b;
    cin >> node >> edge;
    for(int i = 0; i < edge; i++){
        cin >> a >> b;
        adj[a].push_back(b);

        in.insert(a);
        in.insert(b);
    }
    for(auto it = in.begin(); it != in.end(); it++){
        if(vis[*it] == 0){
            topological_sort(*it);
        }
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}

/*

8 8
1 3
2 3
2 5
3 4
4 6
4 7
5 7
7 8

7 7
1 3
2 3
3 4
2 5
4 6
5 6
6 7

*/
