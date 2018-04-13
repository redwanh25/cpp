#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[5][5];
    int x, y;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - 2) + abs(y - 2) << endl;
    return 0;
}
