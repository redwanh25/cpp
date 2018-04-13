/*

#include<stdio.h>
#define pi 3.1416
int main()
{
    double a=90,b;
    b=sin(a*(pi/180));
    printf("%.2lf\n",b);
    return 0;
}

*/

#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    double a=1,b;
    b=asin(a)*(180/pi);
    printf("%.2lf\n",b);
    return 0;
}



