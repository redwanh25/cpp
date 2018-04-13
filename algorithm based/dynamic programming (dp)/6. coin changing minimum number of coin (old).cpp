/// time complexity O(n^2)
/// space complexity O(n^2)

#include <iostream>
#include <algorithm>
using namespace std;

int MCN(int coin[], int n, int value)
{
    int m[n][value+1];
    for(int i = 0; i <= value; i++){
        m[0][i] = i;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= value; j++){
            if(coin[i] <= j){
                m[i][j] = min(m[i-1][j], m[i][j-coin[i]] + 1);
            }
            else{
                m[i][j] = m[i-1][j];
            }
        }
    }
    return m[n-1][value];
}

int main()
{
    int n, value;
    cin >> n;
    int coin[n];
    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }
    sort(coin, coin+n); /// coin shorted thakte hobe...
    cin >> value;

    cout << MCN(coin, n, value) << endl;
    return 0;
}

/*

sorted thakte hobe... look at the example
4
1 5 6 8
11
op : 2

4
8 6 1 5
11
op : 3

*/
