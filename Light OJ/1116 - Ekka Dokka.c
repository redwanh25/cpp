#include<stdio.h>
#include<math.h>
int main()
{
  //  freopen("read/1116_Ekka_Dokka.txt","r",stdin);
    unsigned long long n,x,i,j,k,l,a,b,ck,z;
    scanf("%llu",&n);
    for(i=1; i<=n; i++){
        scanf("%llu",&x);
        k=0,ck=1;
    for(j=2; j<=x; j*=2){
            if(x%j==0 && (x/j)%2!=0){
                    a=x/j;
                    b=j;
                    ck=0;
                    break;
                }
            }
        if(ck==0)
          printf("Case %llu: %llu %llu\n",i,a,b);
        else
        printf("Case %llu: Impossible\n",i);
    }
    return 0;
}
