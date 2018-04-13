#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double ox,oy,ax,ay,bx,by,r,ab,acb,o;
    long long i,j,n;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        scanf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        r=sqrt(pow((ox-bx),2)+pow((oy-by),2));
        ab=sqrt(pow((ax-bx),2)+pow((ay-by),2));
        o=acos((r*r+r*r-ab*ab)/(2*r*r))*(180/pi);
        acb=r*o*(pi/180);
        printf("Case %lld: %lf\n",i,acb);
    }
    return 0;
}
