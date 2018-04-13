#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j,k,l,n,m;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&m);
        int c1=0,c=0;
        for(k=m; k<=m+10000000; k++){
            m=k;
        int ck=0,ck1=0,cc;
        for(j=0; pow(2,j)<=m; j++)
            ck++,ck1++;
            int r[ck];
        while(m!=0){
           r[--ck]=m%2;
           m=m/2;
        }
        cc=0;
        if(c1==0){
           for(l=0; l<ck1; l++){
             if(r[l]==1)
                c++;
            }
            c1=1;
         }
        else if(c1==1){
            for(l=0; l<ck1; l++){
                if(r[l]==1)
                    cc++;
            }
          }
         if(c==cc)
             break;
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}
