#include <iostream>
using namespace std;

bool subset_sum(int a[], int sum, int n)
{
    bool m[n+1][sum+1];
    for(int i = 0; i <= n; i++){
        m[i][0] = true;
    }
    for(int i = 1; i <= sum; i++){
        m[0][i] = false;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(j < a[i-1]){
                m[i][j] = m[i-1][j];
            }
            else if(j >= a[i-1]){
                m[i][j] = m[i-1][j] || m[i-1][j-a[i-1]];
            }
        }
    }
    return m[n][sum];
}

int main()
{
    int n;
    cin >> n;           /// 4
    int a[n], sum;
    for(int i = 0; i < n; i++){
        cin >> a[i];    /// 3 2 8 4 5
    }
    cin >> sum;
    cout << (subset_sum(a, sum, n) ? "ase" : "nai") << endl;
    return 0;
}

