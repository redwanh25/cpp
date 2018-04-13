/// probleme link       http://codeforces.com/contest/869/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b;
    unsigned long long r1, res=1, p, i;
    cin >> a >> b;
    for(i = a+1; i <= b; i++){
        if(res == 0)
            break;

        res *= i;
        res %= 10;
    }
    cout << res << endl;
    return 0;
}
/*

#include <bits/stdc++.h>
using namespace std;
long long L,R;
int ans;
int main()
{
	scanf("%lld%lld",&L,&R);
	if (R-L>=10) printf("%d\n",0);
	else
	{
		ans=1;
		for (long long i=L+1;i<=R;i++)
			ans=(1LL*ans*(i%10))%10;
		printf("%d\n",ans);
	}
	return 0;
}

*/
