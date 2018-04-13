#include<stdio.h>
int main()
{
    int t,n,m,u,v;
    int i,j,k;
    scanf("%d",&t);
     for(i=1; i<=t; i++){
        scanf("%d",&n);
        scanf("%d",&m);
        for(j=1; j<=m; j++)
            scanf("%d %d",&u,&v);
        if(n%2==0)
            printf("yes\n");
        else
            printf("no\n");
     }

    return 0;
}
