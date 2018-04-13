#include<stdio.h>
int main()
{
    int n,i,sum=0;
    while(scanf("%d",&n)!=EOF){
    if(n==0)
        printf("%d",n);
    else
       printf("1");
    for(i=2; i<=n; i++){
        sum+=i;
        printf(" + %d",i);
    }
    if(n==0)
        printf(" = %d\n\n",sum);
    else
        printf(" = %d\n\n",sum+1);
    }
    return 0;
}
