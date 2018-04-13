#include<stdio.h>
int main()
{
    long long n1,n2,sum,i,j;
    while(scanf("%lld %lld",&n1,&n2)!=EOF){
        long long fact1=1,fact2=1;
        for(i=1; i<=n1; i++)
            fact1*=i;
        for(j=1; j<=n2; j++)
            fact2*=j;
        sum=fact1+fact2;
        printf("%lld\n",sum);
    }
    return 0;
}
