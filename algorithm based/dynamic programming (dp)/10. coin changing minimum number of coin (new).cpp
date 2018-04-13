/// code is written by myself. and just see tushar ray (update) video.

#include <iostream>
#include <climits>
using namespace std;

int min_coin(int a[], int v, int n)
{
    int m[v+1];

    m[0] = 0;
    for(int i = 1; i <= v; i++){
        m[i] = INT_MAX;
    }
    for(int j = 0; j < n; j++){
        for(int i = 1; i <= v; i++){
            if(a[j] <= i && m[i-a[j]] != INT_MAX){
                m[i] = min(m[i], 1 + m[i-a[j]]);
            }
        }
    }
    return m[v];
}

int main()
{
    int n, v;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    /// coin shorted thakte hobe na...

    cin >> v;
    cout << min_coin(a, v, n) << endl;
    return 0;
}
/*

4
9 6 5 1
11

4
1 5 6 8
11
op : 2

4
8 6 1 5
11
op : 3

4
1 1 1 1
8

*/
