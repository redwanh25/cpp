/// probleme link       http://codeforces.com/problemset/problem/822/A

#include <iostream>
using namespace std;
int main()
{
	long long a,b,fact=1;
        cin >> a >> b;
	long long mn = min(a,b);
	long long res = 1;
	for(long long i=1; i<=mn; i++){
		res *= i;
	}
	cout << res <<endl;
}
