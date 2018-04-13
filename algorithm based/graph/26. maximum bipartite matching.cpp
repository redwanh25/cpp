/// Time complexity O(V*E)

#include <iostream>
#include <cstring>
using namespace std;

int l, r, matchR[100], vis[100];
bool graph[100][100];

bool bipartite(int u)
{
    for(int v = 0; v < r; v++){
        if(graph[u][v] && vis[v] == 0){
            vis[v] = 1;
            if(matchR[v] < 0 || bipartite(matchR[v])){
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}

int max_bipartite()
{
    int res = 0;
    memset(matchR, -1, sizeof(matchR));
    for(int u = 0; u < l; u++){
        memset(vis, 0, sizeof(vis));
        if(bipartite(u) == true){
            res++;
        }
    }
    return res;
}

int main()
{
    cin >> l >> r;

    // make sure graph will be bipartite...
    for(int i = 0; i < l; i++){
        for(int j = 0; j < r; j++){
            cin >> graph[i][j];
        }
    }
    int res = max_bipartite();
    cout << res << endl;
    return 0;
}

/*

6 6
0 1 1 0 0 0
0 0 0 0 0 0
1 0 0 1 0 0
0 0 1 0 0 0
0 0 1 1 0 0
0 0 0 0 0 1

7 7
1 0 0 1 0 0 0
0 0 1 0 0 1 1
0 1 0 1 1 0 0
0 1 0 0 0 0 1
0 0 0 0 1 1 1
0 0 1 0 0 1 0
0 0 0 0 0 1 1

4 4
1 1 0 0
0 1 0 0
0 1 1 0
0 0 1 0

4 4
1 1 0 0
1 0 0 0
1 1 0 1
0 1 1 0

*/
