#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    int a,b,i,j,k,l,ck=0,c,m=n*2-1;
    for(i=0; i<(n*2)-1; i++){
            if(i>=n){
                k=1,m-=2;
                for(j=n; j<=i; j++)
                    printf(" ");
                    if(i!=n*2-2)
                       printf("%d",k);
                    for(l=m; l>2; l--){
                        printf(" ");
                        }
                    printf("%d",m);
                  }
            else{
                for(j=n; j>1+i; j--)
                    printf(" ");
                for(k=1; k<=i*2+1; k++){
                    printf("%d",k);
                    for(l=1; l<i*2; l++){
                        printf(" ");
                        k++;
                    }
                  }
                }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
