#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n = 53, cnt = 0;
    for(int i = 0; i < 32; i++){
        if(n & (1 << i)){
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
