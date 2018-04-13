#include <stdio.h>
int main()
{
    long long n,i,j,x,y,r1,c1,r2,c2,d1,d2,s1,s2;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        scanf("%lld %lld %lld %lld",&r1,&c1,&r2,&c2);
        d1=r1-c1;
        d2=r2-c2;
        s1=r1+c1;
        s2=r2+c2;
        if(s1%2 == s2%2){
            if(s1==s2 || d1==d2)
                printf("Case %lld: 1\n",i);
            else
                printf("Case %lld: 2\n",i);
        }
        else
            printf("Case %lld: impossible\n",i);
    }
    return 0;
}
