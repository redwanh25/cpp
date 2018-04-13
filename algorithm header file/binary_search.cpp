// binary_search example
#include <iostream>     // cout
#include <algorithm>    // binary_search, sort
#include <vector>       // vector
using namespace std;

bool cmp (int i, int j)
{
    return (i<j);
}

int main()
{
    int a[] = {1,5,2,4,5,12,3,6,2};
    vector<int> v(a, a+9);         // 1 2 3 4 5 4 3 2 1

    sort (v.begin(), v.end());
//    sort (v.begin(), v.end(), cmp);

    cout << "looking for a 13... ";
    if (binary_search (v.begin(), v.end(), 13)){
//  if (binary_search (v.begin(), v.begin()+4, 12)){
        cout << "found!\n";
    }
    else
        cout << "not found.\n";

    sort(a, a + (sizeof(a)/sizeof(a[0])));

    cout << "looking for a 6... ";
    if(binary_search(a+4, a+9, 6)){
        cout << "found!\n" << endl;
    }
    else{
        cout << "not found.\n" << endl;
    }

  return 0;
}
