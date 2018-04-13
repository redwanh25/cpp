#include<stdio.h>
int main()
{
    long long a,b,i,j,s,n,m;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%lld",&m);
        if(m==0)
            printf("Scenario #%lld:\n1\n\n",i);
        else{
        printf("Scenario #%lld:\n",i);
        a=1,b=1;
        for(j=1; j<=m; j++){
            s=a+b;
            a=b;
            b=s;
        }
        printf("%lld\n\n",s);
        }
    }
    return 0;
}
