#include<iostream>
using namespace std;
int main()
{
    int a, b, n, sum = 0, mx = 0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        sum -= a;
        sum += b;
        if(mx < sum){
            mx = sum;
        }
    }
    cout << mx << endl;
    return 0;
}
