#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

vector < pair < int, pair < int, int > > > edge;
int node[100], nd, eg, sum;

/// Disjoint set

int Find(int z)
{
//  if(node[z] == -1){      /// memset
//  if(node[z] == z){       /// for loop
    if(node[z] == 0){
        return z;
    }
    return Find(node[z]);
}

void Union(int a, int b)
{
    int x = Find(a);
    int y = Find(b);
    node[x] = y;
}

///-------------------------------

void MST()
{
//  memset(node, -1, sizeof(node));
//  for(int i = 0; i < eg; i++){
//      node[i] = i;
//  }
    sort(edge.begin(), edge.end());
    cout << endl;
    int a, b, n = 0, m = 0, wt;
    while(n < nd-1 || m < eg){
        a = edge[m].second.first;
        b = edge[m].second.second;
        wt = edge[m].first;
        if(Find(a) != Find(b)){
            Union(a, b);
            sum += wt;
            n++;
            cout << a << " --> " << b << endl;
        }
        m++;
    }
}

int main()
{
    int a, b, wt;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b >> wt;
        edge.push_back(make_pair(wt, make_pair(a, b)));
    }
    MST();
    cout << "Minimum_cost: " << sum << endl;
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

5 7
1 2 10
1 3 20
2 4 5
2 3 30
4 3 15
4 5 8
3 5 6

*/
