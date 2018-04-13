#include <iostream>
#include <climits>
using namespace std;

int MCM(int a[], int n)
{
    int m[n][n];
    for(int i = 1; i < n; i++){
        m[i][i] = 0;
    }
    for(int l = 2; l < n; l++){
        for(int i = 1; i <= n-l; i++){

            int j = i+l-1;
            m[i][j] = INT_MAX;

            for(int k = i; k < j; k++){
                m[i][j] = min(m[i][j], m[i][k] + m[k+1][j] + a[i-1]*a[k]*a[j]);
            }
        }
    }
    return m[1][n-1];
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << MCM(a, n) << endl;
    return 0;
}
