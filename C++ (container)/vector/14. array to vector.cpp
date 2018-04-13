#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,3,4};
    vector <int> r;
 //   vector <int> r(a, a+4);

/// r.insert(r.begin(), 5, 9);
    r.assign(5, 9);

    for(int i = 0; i < 5; i++){
        cout << r[i] << " ";
    }
    cout << endl;

    r.assign(a, a+4);

    for(int i = 0; i < 4; i++){
        cout << r[i] << " ";
    }
    return 0;
}

