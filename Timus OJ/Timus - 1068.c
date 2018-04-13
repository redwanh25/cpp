#include<stdio.h>
int main()
{
    int a,i,sum;
    while(scanf("%d",&a)!=EOF){
            sum=0;
        if(a>0){
        for(i=1; i<=a; i++)
            sum+=i;
        }
        else{
            for(i=1; i>=a; i--)
                sum+=i;
        }
    printf("%d\n",sum);
    }
    return 0;
}
