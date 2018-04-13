#include<stdio.h>
int main()
{
    int i,n,j,l,x,res,r,x2,ck,ck1,red1,red2;
    while(scanf("%d",&n)!=EOF){
        if(n<=9){
         for(l=0; l<=n; l++)
              printf("%d ",l);
        }
        else{
            for(l=0; l<=9; l++)
              printf("%d ",l);
        }
        ck1=0;
    for(red2=10; red2<=n; red2++){
        ck=0;
        red1=red2;
        i=red2;
      for(j=0; j<=red1; j++){
          x = i%10;
          i = i/10;
          if(ck==0){
             x2= i%10;
             i = i/10;
          }
          if(ck==0)
             r=x;
          if(ck==0){
             res=(r*10)+x2;
             r=res;
             ck++;
          }
          else{
             res=(r*10)+x;
             r=res;
          }
          if(i==0)
            break;
        }
        if(r==red1 && ck1==0){
           printf("%d",red1);
           ck1++;
        }
        else if(r==red1)
           printf(" %d",red1);
      }
    printf("\n");
    }
    return(0);
}
