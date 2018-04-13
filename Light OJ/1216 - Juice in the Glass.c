#include <stdio.h>
#include <math.h>
int main()
{
    double r1,r2,h,p,v,r3;
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        r3=r2+(r1-r2)*(p/h);
        v=((1*acos(-1)*p)/3)*(pow(r3,2)+r3*r2+pow(r2,2));
        printf("Case %d: %lf\n",i,v);
    }
    return 0;
}

