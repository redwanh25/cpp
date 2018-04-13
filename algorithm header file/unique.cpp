#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {5, 10, 15, 42, 20, 20, 20, 23, 42, 45};
    int n = sizeof(a) / sizeof(a[0]);
    vector <int> v(a, a+n);

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i=0; i< v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
