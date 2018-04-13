#include <iostream>
#include <algorithm>
using namespace std;

int LIS(int a[], int n)
{
    int m[n];
    for(int i = 0; i < n; i++){
        m[i] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[j] < a[i]){
                m[i] = max(m[i], m[j]+1);
            }
        }
    }
    return *max_element(m, m+n);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << LIS(a, n) << endl;
    return 0;
}

/*

7
3 4 -1 0 8 2 3

8
10 22 9 33 21 50 41 60

*/
