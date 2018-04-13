#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector <int> adj[100];
set <int> s;
int vis[100];
int Stack[100];

bool DFS(int v)
{
    if(vis[v] == 0){
        vis[v] = 1;
        Stack[v] = 1;
        for(int i = 0; i < adj[v].size(); i++){
            if(vis[adj[v][i]] == 0 && DFS(adj[v][i])){
                return true;
            }
            else if(Stack[adj[v][i]] == 1){
                return true;
            }
        }
    }
    Stack[v] = 0;
    return false;
}

bool iscycle()
{
    for(auto it = s.begin(); it != s.end(); it++){
        if(DFS(*it)){
            return true;
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
        s.insert(a);
        s.insert(b);
    }
    if(iscycle()){
        cout << "cycle ase..." << endl;
    }
    else{
        cout << "cycle nai..." << endl;
    }
    return 0;
}

/*
cycle ase.
4 4
1 2
2 3
3 4
4 2

4 6
0 1
0 2
1 2
2 0
2 3
3 3

cycle nai.
4 3
1 2
2 3
3 4

*/
