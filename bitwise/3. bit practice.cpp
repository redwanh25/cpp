#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 8;
    int n = 10;
    int b = a >> 1;
    int c = b << 2;
    int x = 1;
    for(int i = 0; i < n; i++){
        int z = x << i;
        cout << z << " ";
    }
    cout << endl;

    int d = (5 << 2) >> 3;

    if(1015 ^ 10156){
        cout << "not same" << endl;
    }
    else cout << "same" << endl;

    return 0;
}

