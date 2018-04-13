/// Kadane's algorithm

#include <iostream>
using namespace std;

int max_sum(int a[], int n)
{
    int current_sum = a[0];
    int sum = a[0];
    for(int i = 1; i < n; i++){
        current_sum = max(a[i], current_sum + a[i]);
        sum = max(sum, current_sum);
    }
    return sum;
}

int main()
{

    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    cout << max_sum(a, n) << endl;
    return 0;
}
