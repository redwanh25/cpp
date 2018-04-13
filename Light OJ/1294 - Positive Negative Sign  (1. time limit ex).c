#include<stdio.h>
int main()
{
    long long i,j,k,l,n,x,y,sum,ck,c,ck2,ck1;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        scanf("%lld %lld",&x,&y);
        sum=0,ck=0,k=1,c=1,l=y;
        for(j=1; j<=x; j+=y){
            for(k=k; k<=l; k++){
                if(ck==0){
                    sum+=(k*(-1));
                    ck2=0;
                }
                else if(ck==1){
                    sum+=k;
                    ck1=1;
                    }
                c++;
            }
            k=c, l=c+(y-1);
            if(ck2==0){
               ck=1;
               ck2=1;
            }
            else if(ck1==1)
                ck=0;
        }
        printf("Case %lld: %lld\n",i,sum);
    }
    return 0;
}
