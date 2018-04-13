#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, a[2010], sum[2010], i, k = 0, j;
    cin >> n >> a[0] >> a[1];

    for(i = 2, j = 1; i < n; i++, j++, k++){
        sum[k] = abs(a[k] - a[j]);
        cin >> a[i];
    }
    sum[k] =abs(a[k] - a[j]);

    for(i = 0, j = 1; i < k; i++, j++){
        if(sum[i] != sum[j]){
            cout << a[n-1] << endl;
            return 0;
        }
    }

    if(a[0] > a[1])
        cout << a[n-1] - sum[0] << endl;
    else
        cout << a[n-1] + sum[0] << endl;
    return 0;
}
