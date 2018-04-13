#include <iostream>
using namespace std;
int main()
{
    int n = 63, cnt = 0;

    while(n){
        if(n & 1){
            cnt++;
        }
        n >>= 1;
    }
    cout << cnt << endl;

    return 0;
}
