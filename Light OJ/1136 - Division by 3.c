#include<stdio.h>
unsigned long long i,j,k,n,a,b,x,y,d,e,res;
int func1(unsigned long long x)
{
    a=x-1;
      if(a%3==0){
           d=a/3;
           d=d*2;
      }
      else if(a%3==1){
           d=a/3;
           d=d*2;
      }
      else if(a%3==2){
           d=a/3;
           d=(d*2)+1;
      }
      return d;
}
int func2(unsigned long long y)
{
    if(y%3==0){
           e=y/3;
           e=e*2;
      }
      else if(y%3==1){
           e=y/3;
           e=e*2;
      }
      else if(y%3==2){
           e=y/3;
           e=(e*2)+1;
      }
    return e;
}
int main()
{
    scanf("%llu",&n);
    for(i=1; i<=n; i++){
        scanf("%llu %llu",&x,&y);
    func1(x),func2(y);
    res=e-d;
    printf("Case %llu: %llu\n",i,res);
    }
    return 0;
}
