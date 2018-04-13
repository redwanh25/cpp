#include<iostream>
#include<cstdio>
using namespace std;
int k, n, w;

int cost(int sum, int i)
{
    if(i > w)
        return sum;
    return sum + cost(k * i, i + 1);
}

int main()
{
    cin >> k >> n >> w;
    int res = cost(k, 2);
//  (res > n) ? cout << res - n : cout << 0;
//  (res > n) ? cout << res - n << endl : cout << 0 << endl;
    res > n ? printf("%d\n", res - n) : printf("%d\n", 0);
    return 0;
}
