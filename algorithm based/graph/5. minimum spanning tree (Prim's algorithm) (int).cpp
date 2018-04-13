#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue < pair <int, int>, vector < pair <int, int> >, greater < pair <int, int> > > edge;
//vector < vector < pair <int, int> > > adj(100);
vector < pair <int, int> > adj[100];
int visit[200];
int nd, eg, wt, sum;

inline void MST(int x)
{
    int s = x, n = 0;
    cout << s;
    while(n < nd-1){
        visit[s] = 1;
        ++n;
        for(int i = 0; i < adj[s].size(); i++){
            edge.push(adj[s][i]);
        }
        while(visit[edge.top().second] == 1){
            edge.pop();
        }
        sum += edge.top().first;
        s = edge.top().second;
        cout << " --> " << s;
        edge.pop();
    }
    cout << endl;
}

int main()
{
    int a, b;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b >> wt;
        adj[a].push_back(make_pair(wt, b));
        adj[b].push_back(make_pair(wt, a));
    }
    MST(1);
    cout << "Minimum cost: " << sum << endl;
    return 0;
}

/*

6 8
1 4 1
2 4 2
2 5 -2
2 6 4
3 5 3
3 6 1
4 5 3
5 6 5

1 --> 4 --> 2 --> 5 --> 3 --> 6
Minimum cost: 5

5 7
1 2 10
1 3 20
2 4 5
2 3 30
4 3 15
4 5 8
3 5 6

1 --> 2 --> 4 --> 5 --> 3
Minimum cost: 29

3 3
1 2 5
2 3 5
1 3 9
*/
