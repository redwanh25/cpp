#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    double a,sq,cr,res;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%lf",&a);
        sq=pow(a*2,2);
        cr=2*acos(0)*pow(a,2);
        res=sq-cr;
        printf("Case %d: %.2lf\n",i,res);
    }
    return 0;
}
