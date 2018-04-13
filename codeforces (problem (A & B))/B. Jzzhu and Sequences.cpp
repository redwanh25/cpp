/// http://codeforces.com/problemset/problem/450/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, n, f[10];
    int i, mod = 1000000007;
    while(cin >> x >> y >> n){
        f[1] = x;
        f[2] = y;
  //      cout << f[1] << " " << f[2];
        for(i = 3; i <= 6; i++){
           f[i] = f[i-1] - f[i-2];
 //          cout << " " << f[i];
        }
        // cout << endl;

        (n % 6) ? n = n % 6 : n = 6;
        int ans =  ((f[n] % mod) + mod) % mod;
        cout << ans << endl;
    }
    return 0;
}

/*

2 3
50
ei input er jonno
2 3 1 -2 -3 -1 , 2 3 1 -2 -3 -1 , 2 3 1 -2 -3 -1
ai tai 6 ghor por por bar bar repeat hote thakbe.
ai jonno 6 portonto result gulo store kore 50 % 6 kore check kore output
print kora hoise..

*/
