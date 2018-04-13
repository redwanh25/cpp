#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,sum,k,l;
    while(scanf("%d",&n)!=EOF && n){
        sum=0,i=1,k=0;
        for(j=1; j<=n; j++){
                l=i;
                k++;
            for(i=l; i<l+k; i++)
                sum+=i;
            printf("%d ",sum);
        }
        printf("\n");
    }
    return(0);
}
