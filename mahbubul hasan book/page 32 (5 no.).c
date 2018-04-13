#include<stdio.h>
int main()
{
    int i,ck,ck1,n,sum;
    while(scanf("%d",&n)!=EOF && n){
        ck=0,ck1=0,sum=0;
    for(i=1; i<=n; i++){
        if(ck==0){
            sum+=i;
            ck++;
        }
        else if(ck1==0){
            sum-=i;
            ck=0;
        }
      }
      printf("%d\n",sum);
    }
    return 0;
}
