#include <iostream>
#include <vector>
#include <cstring>
#include <set>
#include <stack>
using namespace std;

vector <int> adj[100];
set <int> st;
stack < pair <int, int> > s;
int vis[100], parent[100], disc[100], low[100], time, cnt;

void component(int u)
{
    int child = 0;
    disc[u] = low[u] = ++time;
    vis[u] = 1;

    for(int i = 0; i < adj[u].size(); i++){
        int v = adj[u][i];
        if(vis[v] == 0){
            child++;
            parent[v] = u;
            s.push(make_pair(u, v));

            component(v);

            low[u] = min(low[v], low[u]);
            if((parent[u] == -1 && child >= 2) || (parent[u] != -1 && low[v] >= disc[u])){
                while(s.top().first != u || s.top().second != v){
                    cout << s.top().first << "--" << s.top().second << "  ";
                    s.pop();
                }
                cout << s.top().first << "--" << s.top().second << endl;
                s.pop();
                cnt++;
            }
        }
        else if(v != parent[u] && low[u] > disc[v]){
            low[u] = min(low[u], disc[v]);
            s.push(make_pair(u, v));
        }
    }
}

void biconnected_component()
{
    cout << endl << "Biconnected component : " << endl;

    for(auto it = st.begin(); it != st.end(); it++){
        if(vis[*it] == 0){
            component(*it);
        }
        bool ck = false;
        while(!s.empty()){
            ck = true;
            cout << s.top().first << "--" << s.top().second << "  ";
            s.pop();
        }
        if(ck){
            cnt++;
            cout << endl;
        }
    }
}

int main()
{
    int nd, eg, a, b;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

        st.insert(a);
        st.insert(b);
    }
    memset(parent, -1, sizeof(parent));

    biconnected_component();

    cout << "total component : " << cnt << endl;

    return 0;
}

/*

12 14
0 1
1 2
1 3
2 3
4 2
3 4
1 5
6 0
5 6
5 7
7 8
8 5
8 9
10 11

*/
