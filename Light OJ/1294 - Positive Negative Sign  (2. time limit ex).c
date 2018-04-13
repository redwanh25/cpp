#include<stdio.h>
int main()
{
    long long i,j,k,n,x,y,sum,ck,c;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        scanf("%lld %lld",&x,&y);
        sum=0,ck=0,c=0;
        for(j=1; j<=x; j++){
            if(ck==0){
                sum+=(j*(-1));
                c++;
                if(c==y)
                    ck=1;
            }
            else if(ck==1){
                sum+=j;
                c--;
                if(c==0)
                    ck=0;
            }
        }
    printf("Case %lld: %lld\n",i,sum);
   }
    return 0;
}

