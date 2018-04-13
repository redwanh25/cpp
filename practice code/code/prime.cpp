#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,t;
    if(n<=1)
        return 0;
   // t=sqrt(n+1);
    for(i=2; i*i<=n; i++){
        if(n%i==0)
            return 0;
    }
    return 1;

}
int main()
{
    int x,y;
    while(scanf("%d",&x)!=EOF){
    y=prime(x);
    if(y==1)
        printf("prime\n");
    else
        printf("not prime\n");
    }
    return 0;
}
