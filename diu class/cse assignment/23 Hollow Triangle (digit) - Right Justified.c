#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    int i,j,k,l,ck,m;
    k=n,ck=0;
    for(i=1; i<=n ; i++){
        for(j=1; j<=n-i; j++)
            printf(" ");
            printf("%d",k--);
        if(ck==0){
            printf("\n");
            ck=1;
        }
        else if(ck==1){
                if(i==n){
                    for(m=2; m<=n; m++)
                        printf("%d",m);
                        printf("\n");
                }
                else{
                    for(l=k; l<n-2; l++)
                        printf(" ");
                    printf("%d\n",n);
                }
            }
        }
     printf("\n\n");
    }
    return 0;
}
