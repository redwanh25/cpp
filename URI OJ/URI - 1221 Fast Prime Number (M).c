#include<stdio.h>
#include<math.h>
int main()
{
    long long n,x,i,j,y,ck;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        scanf("%lld",&x);
        ck=0;
        if(x==1)
            printf("Not prime\n");
        else{
            y=sqrt(x);
        for(j=2; j<=y; j++){
             if(x%j==0){
                ck=1;
                break;
             }
        }
        if(ck==0)
            printf("Prime\n");
        else
            printf("Not Prime\n");
        }
    }
    return 0;
}
