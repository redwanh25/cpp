#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int adj[20][20], nd, eg;
vector <int> v;

int TSP(int s)
{
    for(int i = 0; i < nd; i++){
        if(i != s){
            v.push_back(i);
        }
    }
    int min_path = INT_MAX;
    do{
        int path = 0, k = s;
        for(int i = 0; i < v.size(); i++){
            path += adj[k][v[i]];
            k = v[i];
        }
        path += adj[k][s];
        min_path = min(min_path, path);

    }while(next_permutation(v.begin(), v.end()));

    return min_path;
}

int main()
{
//    int a, b, wt;
//    cin >> nd >> eg;
//    for(int i = 0; i < nd; i++){
//        adj[i][i] = 0;
//    }
//    for(int i = 0; i < eg; i++){
//        cin >> a >> b >> wt;
//        adj[a][b] = wt;
//    }

    cin >> nd;
    for(int i = 0; i < nd; i++){
        for(int j = 0; j < nd; j++){
            cin >> adj[i][j];
        }
    }
    int src;
    cin >> src;

    int min_path = TSP(src);

    cout << "min_path : " << min_path << endl;

    return 0;
}

/*

4
0 4 1 3
4 0 2 1
1 2 0 5
3 1 5 0
0
The Path is:
0--->2--->1--->3--->0
Minimum cost is 7


4
0 1 15 6
2 0 7 3
9 6 0 12
10 4 8 0
0
The Path is:
0--->1--->3--->2--->0
Minimum cost is 21

4
0 10 15 20
10 0 35 25
15 35 0 30
20 25 30 0
0

*/
