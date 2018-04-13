#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector <int> adj[100];
set <int> s;

void Euler()
{
    int cnt = 0;
    bool path = true, circuit = true;
    for(auto it = s.begin(); it != s.end(); it++){
        if(adj[*it].size() & 1 == 1){
            cnt++;
        }
        if(cnt > 2){        /// a graph has more than 2 vertices of odd degree, then it CANNOT have an EULER PATH.
            path = false;
        }
        if(cnt == 1){       /// a graph has any vertices of odd degree, then it CANNOT have an EULER CIRCUIT
            circuit = false;
        }
    }
    if(path){
        cout << "Graph has Euler path..." << endl;
    }
    if(circuit){
        cout << "Graph has Euler circuit..." << endl;
    }
    if(path == false && circuit == false){
        cout << "Graph has no Euler path and circuit..." << endl;
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
        s.insert(a);
        s.insert(b);
    }
    Euler();

    return 0;
}

/*

5 5
1 0
0 2
2 1
0 3
3 4

4 6
1 0
0 2
2 1
0 3
3 4
4 0

5 6
1 0
0 2
2 1
0 3
3 4
1 3

3 3
0 1
1 2
2 0

*/
