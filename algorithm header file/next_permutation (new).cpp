#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> v;
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    cout << endl;
    do{
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << endl;

    }while(next_permutation(v.begin(), v.end()));
    cout << "x" << endl;
    return 0;
}
