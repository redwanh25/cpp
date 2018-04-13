#include <iostream>
#include <numeric>
#include <climits>
using namespace std;

int optimal_BST(int value[], int n)
{
    int cost[n][n];
    for(int i = 0; i < n; i++){
        cost[i][i] = value[i];
    }
    for(int l = 2; l <= n; l++){
        for(int i = 0; i <= n-l; i++){

            int j = i+l - 1;
            cost[i][j] = INT_MAX;
            for(int k = i; k <= j; k++){
                cost[i][j] = min(cost[i][j], (k > i ? cost[i][k-1] : 0) + (k < j ? cost[k+1][j] : 0) + (accumulate(value+i, value+(j+1), 0)));
            }
        }
    }
    return cost[0][n-1];
}

int main()
{
    int n;
    cin >> n;
    int key[n], value[n];
    for(int i = 0; i < n; i++){
        cin >> key[i];
    }
    for(int i = 0; i < n; i++){
        cin >> value[i];
    }
    cout << optimal_BST(value, n) << endl;
    return 0;
}

/*

3
10 12 20
34 8 50

op : 142

4
10 12 16 21
4 2 6 3

op : 26

*/
