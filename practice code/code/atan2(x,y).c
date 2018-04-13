/*
#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    double y=1,x=1;
    double res;
    res=atan2(y,x)*(180/pi);
    printf("%.2lf\n",res);
    return 0;
}
*/

#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    double y=180,x=4;
    double res,a,b;
    a=y*(pi/180);
    b=x*(pi/180);
    res=atan2(a,b);
    printf("%.2lf\n",res);
    return 0;
}
