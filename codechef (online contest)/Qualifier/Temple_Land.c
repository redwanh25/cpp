#include<stdio.h>
int main()
{
    int i,j,k,n,m,l,p;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
      scanf("%d",&m);
    int x[m],x1[m],c=0,y,q;
     for(j=0; j<m; j++)
            scanf("%d",&x[j]);
    if(m%2==0)
        printf("no\n");
    else{
        y=m/2;
        for(k=1,l=0; k<=y; k++,l++)
            x1[l]=k;
            x1[l]=k;
            l++;
        for(k=k-1; k>=1; k--,l++)
            x1[l]=k;
        for(p=0; p<m; p++){
            if(x[p]==x1[p])
                c++;
          }
        if(c==m)
            printf("yes\n");
        else
            printf("no\n");
     }
    }
    return 0;
}
