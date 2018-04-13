#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x,y,n,i,j,sum;
    cin>>n;
    for(j=1; j<=n; j++){
        sum=0;
        cin>>x>>y;
        if(x%2==0)
            x++;
        for(i=x; i<=y; i+=2)
            sum+=i;
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
    return 0;
}
