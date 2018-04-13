#include<stdio.h>
int main()
{
    int i,n,j,x,y,z;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %d %d",&x,&y,&z);
    int a[x],sum=0,l=0;
            for(j=0; j<x; j++){
                scanf("%d",&a[j]);
                sum+=a[j];
                if(sum<=z && j<y)
                    l++;
            }
        printf("Case %d: %d\n",i,l);
    }
    return 0;
}
