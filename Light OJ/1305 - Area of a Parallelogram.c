#include <stdio.h>
#include <math.h>
int main()
{
    double ax,ay,bx,by,cx,cy,dx,dy,h,area,ln_A,ln_B,A,a,b,c;
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
        ln_A=bx-ax;
        dx=cx-ln_A;
        ln_B=cy-by;
        dy=ay+ln_B;
        area=fabs((ax*by+bx*cy+cx*dy+dx*ay-ay*bx-by*cx-cy*dx-dy*ax)/2);
        printf("Case %d: %d %d %d\n",i,(int)dx,(int)dy,(int)area);
    }
    return 0;
}
