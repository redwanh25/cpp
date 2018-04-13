#include<stdio.h>
int main()
{
    int a[100][100],x,n,i,j,k,l,m,o;
    scanf("%d",&x);
    l=0;
    for(i=1; i<=x; i++){
            k=0;
        for(j=x-i; j<x; j++)
            a[k++][j]=++l;
        }
    for(m=1; m<x; m++){
            o=m;
        for(n=0; n<x-m; n++)
            a[o++][n]=++l;
        }
    for(i=0; i<x; i++){
        for(j=0; j<x; j++)
          printf("%d ",a[i][j]);
          printf("\n");
        }
    return 0;
}
