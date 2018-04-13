#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, ck = 0, res = 0;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(a == 1)
            ck++;
        if(b == 1)
            ck++;
        if(c == 1)
            ck++;
        if(ck == 2 || ck == 3){
            res++;
        }
        ck = 0;
    }
    cout << res << endl;
    return 0;
}
