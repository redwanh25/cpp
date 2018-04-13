#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque <int> a[10];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
            a[i].push_back(a[i][j]);
        //    a[i].push_back(j);
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
    }
    return 0;
}
