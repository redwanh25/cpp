#include<stdio.h>
int main()
{
    int i,j,k,n,m,p,sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf(" %d",&m);
        sum=0;
        for(j=1; j<=m; j++){
           scanf("%d",&p);
           if(p>0)
            sum+=p;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
