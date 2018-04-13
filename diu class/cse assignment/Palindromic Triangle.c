#include<stdio.h>
int main()
{
    int n,i,k,j;
    while(scanf("%d",&n)!=EOF){
    for(k=1; k<=n; k++){
        for(j=n; j>k; j--)
            printf(" ");
        for(i=1; i<=k; i++)
            printf("%d",i);
        for(i=k-1; i>=1; i--)
            printf("%d",i);
        printf("\n");
        }
    printf("\n");
    }
    return 0;
}
