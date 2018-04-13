#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector <pair <int, pair <int, int> > > adj;
vector <int> cnt(1000, INT_MAX);
int node, edge;

int bellman_ford(int src)
{
    cnt[src] = 0;
    for(int i = 0; i < node-1; i++){
        for(int j = 0; j < edge; j++){
            int u = adj[j].second.first;
            int v = adj[j].second.second;
            int wt = adj[j].first;
/*
be careful. "cnt[u] != INT_MAX" na dile kintu vul hobe. karon jodi source 2 hoy
taile u = 1, v = 2, wt = 10
so, cnt[2] = 0 > cnt[1] = 2147483648 + wt = 10
             0 > -2147483639
actually to hoyar kotha silo 2147483658 but, hoyni. karon 2147483648 hosse
int er max size. er theke r barbe na. er shathe kono kisu (+) korle sheta abr
-2147483649 er shathe (+) hoye jabe. mane -2147483639 hobe.
ai vabe loop er moto ghurte thakbe.
so, er jonno amk age check kore nite hobe cnt[u] != INT_MAX.
*/
            if(cnt[u] != INT_MAX && cnt[v] > cnt[u] + wt){
                cnt[v] = cnt[u] + wt;
            }
        }
    }
    for(int j = 0; j < edge; j++){
        int u = adj[j].second.first;
        int v = adj[j].second.second;
        int wt = adj[j].first;
        if(cnt[u] != INT_MAX && cnt[v] > cnt[u] + wt){
            cout << "Graph contains negative weight cycle" << endl;
            return 0;
        }
    }
}

int main()
{
    set <int> s;
    int a, b, wt;
    cin >> node >> edge;
    for(int i = 0; i < edge; i++){
        cin >> a >> b >> wt;
        adj.push_back(make_pair(wt, make_pair(a, b)));

        s.insert(a);
        s.insert(b);
    }
    int source, res;
    cin >> source;
    res = bellman_ford(source);

    if(res != 0){
        cout << endl << "Vertex Distance from Source :" << endl;
        for(auto it = s.begin(); it != s.end(); it++){
            cout << source << " --> " << *it << " min distance " << cnt[*it] << endl;
        }
    }
    return 0;
}

/*

5 7
1 2 10
1 3 20
2 4 5
2 3 30
4 3 15
4 5 8
3 5 6
1

Geeks for Geeks (bellman ford)
5 8
0 1 -1
0 2 4
1 2 3
1 3 2
1 4 2
3 2 5
3 1 1
4 3 -3
0

negative wighted circle
4 4
1 2 1
2 3 -5
3 4 2
4 2 2
1

*/
