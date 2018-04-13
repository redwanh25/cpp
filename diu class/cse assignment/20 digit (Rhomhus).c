#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    int a,b,i,j,k,l=2,ck=0,c=0,m=2;
    for(i=0; i<(n*2)-1; i++){
            if(ck==0){
                for(j=n-1; j>=1+i; j--)
                    printf(" ");
                for(k=1; k<=(i*2)+1; k++)
                    printf("%d",k);
                printf("\n");
                ++c;
            }
            if(c==n){
                for(j=1; j<l; j++)
                    printf(" ");
                for(k=1; k<=((n*2)-1)-m; k++)
                    printf("%d",k);
                printf("\n");
                ck=1,l++,m+=2;
            }
        }
    }
    return 0;
}
