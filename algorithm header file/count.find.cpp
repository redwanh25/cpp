///  count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
///  find(first_iterator, last_iterator, x) – Points to last address of vector ((name_of_vector).end()) if element is not present in vector.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a[] = {10, 20, 5, 23, 20 ,42, 20, 15};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> v(a, a+n);

    cout << count(v.begin(), v.end(), 4) << endl;
    cout << count(v.begin(), v.end(), 10) << endl;
    cout << count(v.begin(), v.end(), 20) << endl;

    cout << (find(v.begin(), v.end(), 5) != v.end() ? "ase" : "nai") << endl;

    int x = *find(v.begin(), v.end(), 45);
    cout << x << endl;

    return 0;
}
