#include<stdio.h>

long long func1(long long n)
{
    if(n==1)
        return 1;
    if(n%2!=0)
        return func1(3*n+1) + 1;
    else
        return func1(n/2) + 1;
}

long long func2(long long a, long long b)
{
    long long ck=0,max,i;
    if(a>b)
        return func2(b,a);
    else if(a<=b){
    for(i=a; i<=b; i++){
        max=func1(i);
        if(ck<max)
            ck=max;
     }
    }
    return ck;
}
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    printf("%lld %lld %lld\n",a,b,func2(a,b));
    return 0;
}
