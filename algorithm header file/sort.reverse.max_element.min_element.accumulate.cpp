///  sort(first_iterator, last_iterator) – To sort the given vector.
///  reverse(first_iterator, last_iterator) – To reverse a vector.
///  *max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
///  *min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
///  accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>      /// for accumulate operation
using namespace std;

void print(vector <int> v)
{
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {10, 20, 5, 23 ,42 , 15};
    int n = sizeof(a) / sizeof(a[0]);
    vector <int> v(a, a+n);

    sort(v.begin(), v.end());
    print(v);

    sort(v.begin(), v.end(), greater <int>());
    print(v);

    reverse(v.begin(), v.end());
    print(v);

    int Max = *max_element(v.begin(), v.end());
    cout << Max << endl;

    int Max_a = *max_element(a, a+n);
    cout << Max_a << endl;

    int Min = *min_element(v.begin(), v.end());
    cout << Min << endl;

    int Min_a = *min_element(a, a+n);
    cout << Min_a << endl;

    int sum = accumulate(v.begin(), v.end(), 0);    /// accumulate(first_iterator, last_iterator, initial value of sum)
    cout << sum << endl;

    int sum_a = accumulate(a, a+n, 5);
    cout << sum_a << endl;

    return 0;
}
