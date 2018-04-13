#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int n, a[100];
    string s;
    cin >> n;
    cin.get();
    while(n--){
        getline(cin, s);
        stringstream is(s);
        int ans = 0, n = 0;
        while(is >> a[n])
                n++;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++)
                ans = max(ans, gcd(a[i], a[j]));
        }
       cout << ans << endl;
    }
    return 0;
}
