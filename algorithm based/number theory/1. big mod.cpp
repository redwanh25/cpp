#include<bits/stdc++.h>
using namespace std;

int big_mod(int a, int n, int m)
{
    if(n == 0){
        return 1;
    }
    else if(n % 2 == 0){
        int y = big_mod(a, n/2.0, m);
        return (y * y) % m;
///     return (big_mod(a, n/2.0, m) * (big_mod(a, n/2.0, m))) % m;
    }
    else{
        return ((a % m) * big_mod(a, n-1, m)) % m;
    }
}

int main()
{
    int a, n, m;
    while(cin >> a >> n >> m){
        int res = big_mod(a, n, m);
        cout << res << endl;
    }
    return 0;
}

