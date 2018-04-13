#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    while(scanf("%d",&n)!=EOF){
            a[0]=0, a[1]=1;
        for(i=2; i<=n; i++)
            a[i]=a[i-1]+a[i-2];
        printf("%d\n",a[i-2]);
    }
    return 0;
}
