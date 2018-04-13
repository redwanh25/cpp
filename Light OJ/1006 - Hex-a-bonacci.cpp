#include<iostream>
using namespace std;
int main()
{
    int i,j,m;
    cin>>m;
    for(i=1; i<=m; i++){
        long long x[10001],n;
        cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4]>>x[5]>>n;
        for(j=6; j<=n; j++)
            x[j]=(x[j-1]+x[j-2]+x[j-3]+x[j-4]+x[j-5]+x[j-6])%10000007;
    cout<<"Case "<<i<<": "<<x[n]%10000007<<endl;
    }
    return 0;
}
