#include<stdio.h>
int main()
{
    int a[100][100],i,j,k,l,n,m,o,p,q;
    while(scanf("%d",&n)!=EOF){
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
        }
    for(i=0; i<n; i++){
            k=i;
        for(j=0; j<1+i; j++)
            printf("%d ",a[k--][j]);
        }
    for(q=n-1,p=n-1,o=1; q>=1; q--,o++){
            l=p;
        for(m=o; m<n; m++)
            printf("%d ",a[l--][m]);
        }
        printf("\n");
    }
    return 0;
}
