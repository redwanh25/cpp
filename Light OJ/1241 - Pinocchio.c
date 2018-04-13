#include<stdio.h>
#include<math.h>
int main()
{
//    freopen("read/1241_Pinocchio.txt", "r", stdin);
    double a[55],r,sum;
    int i,j,k,l,n,m;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&m);
        a[0]=2,sum=0;
        for(k=0,l=1; l<=m; k++,l++){
            scanf("%lf",&a[l]);
            r=a[l]-a[k];
            r/=5;
            r=ceil(r);
            sum+=r;
        }
        printf("Case %d: %.0lf\n",i,sum);
    }
    return 0;
}
