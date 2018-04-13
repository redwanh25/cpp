#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if((a+b+c)%2 == 0){
        int x =  a+b-c;
        int y = -a+b+c;
        int z =  a-b+c;
        if(x<0 || y<0 || z<0 || x%2 || y%2 || z%2 ){
            cout << "Impossible" << endl;
        }
        else{
            cout << x / 2.0 << " " << y / 2.0 << " " << z / 2.0 << endl;
        }
    }
    else{
        cout << "Impossible" << endl;
    }
    return 0;
}
