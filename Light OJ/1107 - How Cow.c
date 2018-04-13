#include<stdio.h>
int main()
{
    int i,j,n,n1,x1,y1,x3,y3,x,y,ck;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %d %d %d",&x1,&y1,&x3,&y3);
        scanf("%d",&n1);
     ck=1;
        for(j=1; j<=n1; j++){
        scanf("%d %d",&x,&y);
        if(ck==1){
            printf("Case %d:\n",i);
            ck=0;
            }
        if(x>x1 && x<x3 && y>y1 && y<y3)
           printf("Yes\n");
        else
            printf("No\n");
      }
    }
    return 0;
}
