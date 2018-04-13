
/// http://codeforces.com/contest/895/problem/A

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, sum = 0, sum1 = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int res = sum;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < i+n; j++){
            sum1 = 0;
            for(int k = i; k < j; k++){
                sum1 += a[k%n];
            }
            int x = sum - sum1;
            x = abs(x - sum1);
            res = min(res, x);
        }
    }
    cout << res << endl;
    return 0;
}
