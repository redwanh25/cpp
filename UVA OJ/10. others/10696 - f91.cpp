#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n){
        int res;
        n >= 101 ? res = n - 10 : res = 91 ;
        cout << "f91(" << n << ") = " << res << endl;
    }
    return 0;
}
