#include<stdio.h>

float func(float a,float d, float n)
{
    float sum,x;
    x=(a+(n-1)*d);       //nth tomo pod er man.
    sum=(n*(a+x))/2;     // 1st theke nth tomo pod er shomosthi.
    return sum;
}
int main()
{
    float a,d,n;
    while(scanf("%f %f %f",&a,&d,&n)!=EOF)
    printf("%.2f\n",func(a,d,n));
    return 0;
}


/*
Find the sum of the first 40 terms of the arithmetic sequence
2,5,8,11,14...

First find the 40

th term:
x = a+(n−1)d
  = 2+(39*3)
  = 119

Then find the sum:
Sn  = (n*(a+x))/2
S40 = (40*(2+119))/2
    = 2420
*/
