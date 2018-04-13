#include<iostream>
using namespace std;
int main()
{
    long long n, k, c = 0, x = 0, a;
    cin >> n >> k;
    for(int i = 0; i < n && c < k; i++){
        cin >> a;
        c = (x > 0) ? ((x > a) ? c+1 : 1) : 0;
        x = max(x, a);
    }
    cout << x << endl;
    return 0;
}
