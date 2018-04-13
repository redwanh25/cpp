#include <iostream>
using namespace std;
int a[1000][1000];
int min_cost_path(int r, int c)
{
    int k[r][c];
    k[0][0] = a[0][0];
    for(int i = 1; i < r; i++){
        k[i][0] = k[i-1][0] + a[i][0];
    }
    for(int i = 1; i < c; i++){
        k[0][i] = k[0][i-1] + a[0][i];
    }
    for(int i = 1; i < r; i++){
        for(int j = 1; j < c; j++){
            k[i][j] = a[i][j] + min(k[i-1][j], k[i][j-1]);
        }
    }
    return k[r-1][c-1];
}

int main()
{
    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    cout << min_cost_path(r, c) << endl;

    return 0;
}

/*

3 3
1 2 3
4 8 2
1 5 3
op: 11

3 4
1 3 5 8
4 2 1 7
4 3 2 3
op: 12

*/
