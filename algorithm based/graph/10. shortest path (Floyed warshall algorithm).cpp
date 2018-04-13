#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int nd, eg;
int adj[1000][1000];
const int Inf = INT_MAX;

void print()
{
    cout << endl;
    for(int i = 0; i < nd; i++){
        for(int j = 0; j < nd; j++){
            if(adj[i][j] == Inf){
                cout << fixed << setw(6) << left << "Inf";
            }
            else{
                cout << fixed << setw(6) << left << adj[i][j];
            }
        }
        cout << endl;
    }
}

void floyed_warshall()
{
    for(int k = 0; k < nd; k++){
        for(int i = 0; i < nd; i++){
            for(int j = 0; j < nd; j++){
                if((adj[i][k] != Inf && adj[k][j] != Inf) && adj[i][j] > adj[i][k] + adj[k][j]){
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    for(int i = 0; i < nd; i++){
        if(adj[i][i] != 0){
            cout << endl << "there is a negative weighted graph...";
            break;
        }
    }
}

int main()
{
    int a, b, wt;
    cin >> nd >> eg;

/// adjacency matrix create...

    for(int i = 0; i < nd; i++){
        for(int j = 0; j < nd; j++){
            adj[i][j] = Inf;
        }
    }
    for(int i = 0; i < eg; i++){
        cin >> a >> b >> wt;
        adj[a][b] = wt;
//      adj[b][a] = wt;     // for undirected graph
    }
/// main diagonal a shob 0 thakte hobe...
    for(int i = 0; i < nd; i++){
        adj[i][i] = 0;
    }
    floyed_warshall();
    print();

    return 0;
}

/*
input:
5 8
0 1 -1
0 2 4
1 2 3
1 3 2
1 4 2
3 2 5
3 1 1
4 3 -3

output:
0     -1    2     -2    1
Inf   0     3     -1    2
Inf   Inf   0     Inf   Inf
Inf   1     4     0     3
Inf   -2    1     -3    0

input:
4 4
0 1 5
0 3 10
1 2 3
2 3 1

negative wighted circle
4 4
0 1 1
1 2 -5
2 3 2
3 1 2

*/
