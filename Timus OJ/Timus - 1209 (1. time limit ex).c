#include<stdio.h>
int main()
{
    int n,a,i,j,l,p,q,ck;
    int sum[6553];
    sum[0]=1;
    sum[1]=1;
    for(i=1; i<=6553; i++){
       for(j=1; j<=i; j++);
       sum[i]=sum[i-1]+(j-1);
    }
    scanf("%d",&n);
    int m[n];
    for(l=0; l<n; l++)
        scanf("%d",&m[l]);
    for(p=0; p<n; p++){
            ck=1;
        for(q=0; q<=m[p]; q++){
            if(m[p]==sum[q]){
                printf("1 ");
                ck=0;
            }
        }
        if(ck==1)
            printf("0 ");
    }
    printf("\n");
    return 0;
}
