/// made by me.

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int CCNW(int a[], int n, int v)
{
    int m[n+1][v+1];
    for(int i = 0; i < n; i++){
        m[i][0] = 1;
    }
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= v; j++){
            if(i == 0){
                m[i][j] = 0;
            }
            else if(a[i-1] <= j){
                m[i][j] = m[i-1][j] + m[i][j-a[i-1]];
            }
            else{
                m[i][j] = m[i-1][j];
            }
        }
    }
    return m[n][v];
}

int main()
{
    int n, v;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);    /// coin shorted thakte hobe...

    cin >> v;
    cout << CCNW(a, n, v) << endl;
    return 0;
}
