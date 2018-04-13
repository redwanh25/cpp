/// tutorial & code collection from GeeksforGeeks...
/// dijkstra & prim's almost same. but, aktu different ase. computer a screen shot ase. dekho.
/// this algorithm does not work any negative weighted value

#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

priority_queue < pair <int, int>, vector < pair <int, int> >, greater < pair <int, int> > > q;
vector < pair <int, int> > adj[100];
vector <int> res, cnt(100, INT_MAX);
int parent[100];

void dijkstra(int src)
{
    q.push(make_pair(0, src));
    cnt[src] = 0;
    while(!q.empty()){
        int u = q.top().second;
        q.pop();
        for(int i = 0; i < adj[u].size(); i++){
            int v = adj[u][i].second;
            int wt = adj[u][i].first;
            if(cnt[v] > cnt[u] + wt){
                cnt[v] = cnt[u] + wt;
                q.push(make_pair(cnt[v], v));
                parent[v] = u;      // print path
            }
        }
    }
}

int main()
{
    set <int> s;    // just for printing i used set.
    int edge, node, a, b, wt;
    cin >> node >> edge;
    for(int i = 0; i < edge; i++){
        cin >> a >> b >> wt;
        adj[a].push_back(make_pair(wt, b));
        adj[b].push_back(make_pair(wt, a));

        // for printing
        s.insert(a);
        s.insert(b);
    }
    int source, dst;
    cin >> source >> dst;
    dijkstra(source);

    // for printing...
    cout << endl << "Vertex Distance from Source :" << endl;
    for(auto it = s.begin(); it != s.end(); it++){
        cout << source << " --> " << *it << " min distance " << cnt[*it] << endl;
    }
    cout << endl << "path : ";
    for(int v = dst, i; v != source; v = parent[v]){
        int u = parent[v];
        res.push_back(u);
    }
    reverse(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << dst << endl;
    return 0;
}

/*

3 3
1 2 5
2 3 5
1 3 9
1 3

5 7
1 2 10
1 3 20
2 4 5
2 3 30
4 3 15
4 5 8
3 5 6
1 5

*/
