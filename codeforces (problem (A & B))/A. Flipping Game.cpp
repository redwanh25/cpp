/// http://codeforces.com/problemset/problem/327/A

#include <iostream>
using namespace std;
int main()
{
    int n, cnt = 0, ans = 0, sum = 0;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i = 0; i < n; i++){
        cnt = sum;
        for(int j = i; j < n; j++){
            arr[j] ? cnt-- : cnt++ ;
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
}
