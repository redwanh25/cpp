#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
            printf("\n");
    int i,j,k,l,ck;
        for(i=1; i<=n; i++){
                ck=0;
            for(j=1; j<=i; j++){
                printf("*");
                if(ck==0 && i!=n){
                    for(k=3; k<=i; k++){
                        printf(" ");
                          j++;
                        ck=1;
                    }
                }
            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;
}

