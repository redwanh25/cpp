#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    int a,b,i,j,k,l,ck,c,m;
    for(i=0; i<n; i++){
        for(j=n; j>1+i; j--)
            printf(" ");
        for(k=1; k<=i+1; k++)
            printf("%d",k);
        printf("\n");
        }
    printf("\n");
    }
    return 0;
}

