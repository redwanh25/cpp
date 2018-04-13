#include<stdio.h>
int main()
{
    long long i,j,n,x,y,z;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        scanf("%lld %lld",&x,&y);
        z=y*2;
        x=x/z;
        y=y*y;
        x=y*x;
        printf("Case %lld: %lld\n",i,x);
    }
    return 0;
}
