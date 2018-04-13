#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue < pair <int, char>, vector < pair <int, char> >, greater < pair <int, char> > > edge;
//vector < vector < pair <int, char> > > adj(100);
vector < pair <int, char> > adj[100];
int visit[200];
int nd, eg, wt, sum;

inline void MST(char x)
{
    char s = x, n = 0;
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
    char a, b;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b >> wt;
        adj[a].push_back(make_pair(wt, b));
        adj[b].push_back(make_pair(wt, a));
    }
    MST('A');
    cout << "Minimum cost: " << sum << endl;
    return 0;
}

/*

5 7
A B 10
A C 20
B D 5
B C 30
C D 15
D E 8
C E 6

*/
