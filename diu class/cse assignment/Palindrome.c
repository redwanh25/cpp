#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF){
    for(i=1; i<=n; i++)
        printf("%d",i);
    for(i=n-1; i>=1; i--)
        printf("%d",i);
    printf("\n\n");
    }
    return 0;
}
