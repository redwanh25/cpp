#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double R, n, r;
    int i, x, y;
    scanf("%d", &x);
    for(i=1; i<=x; i++){
        scanf("%lf %lf", &R, &n);
        r = (R*sin(pi/n)) / (sin(pi/n)+1);
        y = (int) r;
        if(y == r)
            printf("Case %d: %d\n", i, y);
        else
            printf("Case %d: %.10lf\n", i, r);
    }
    return 0;
}
