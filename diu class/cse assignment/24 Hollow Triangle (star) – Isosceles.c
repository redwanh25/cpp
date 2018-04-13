#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    int a,b,i,j,k,l,ck=0,c,m;
    for(i=0; i<n; i++){
                for(j=n; j>1+i; j--)
                    printf(" ");
                for(k=1; k<=i*2+1; k++){
                    printf("*");
                    if(ck==1){
                        if(i==n-1){
                            for(m=2; m<i*2+2; m++){
                                printf("*");
                                ++ k;
                            }
                        }
                        else{
                            for(l=1; l<i*2; l++){
                                printf(" ");
                                k++;
                                }
                            }
                        ck=0;
                    }
                }
                ck=1;
                printf("\n");
            }
            printf("\n");
    }
    return 0;
}
