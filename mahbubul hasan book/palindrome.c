#include<stdio.h>
int main()
{
    long long i,j,x,res,r,x2,ck,red1,n,k;
    scanf("%lld",&n);
    for(k=1; k<=n; k++){
    scanf("%lld",&i);
        ck=0;
        red1=i;
        if(i>=0 && i<=9)
            printf("Case %lld: Yes\n",k);
    else{
      for(j=1; j<=red1; j++){
          x = i%10;
          i = i/10;
          if(ck==0){
             x2= i%10;
             i = i/10;
          }
          if(ck==0)
             r=x;
          if(ck==0){
             res=(r*10)+x2;
             r=res;
             ck++;
          }
          else{
             res=(r*10)+x;
             r=res;
          }
          if(i==0)
            break;
        }
        if(r==red1)
           printf("Case %lld: Yes\n",k);
        else
            printf("Case %lld: No\n",k);
        }
      }
    return(0);
}
