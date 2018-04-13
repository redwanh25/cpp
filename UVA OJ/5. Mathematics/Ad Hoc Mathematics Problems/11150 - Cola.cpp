#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
//    freopen("read1/11150-Cola.txt","r",stdin);
    int i,j,k,l,n,m,d,sum,x,r,y;
    while(scanf("%d",&n)!=EOF){
        for(i=2; i>=0; i--){
            y=0;
            x=n+i;
            do{
            d=x/3; r=x%3;
            y+=d;
            x=(d+r);
            } while(x>=3);
        if(x>=i)
            break;
        }
    cout<<n+y<<endl;
    }
    return 0;
}
