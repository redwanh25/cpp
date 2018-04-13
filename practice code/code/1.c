#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z,s,area;
    printf("please enter a value of \"x\" : ");
    scanf("%f",&x);
    printf("please enter a value of \"y\" : ");
    scanf("%f",&y);
    printf("please enter a value of \"z\" : ");
    scanf("%f",&z);
    if(x+y<=z || x+z<=y || y+z<=x)
    printf("sorry. it is not possible\n");
    else{
      s=(x+y+z)/2;
      area=sqrt(s*(s-x)*(s-y)*(s-z));
      printf("area of a triangle = %.2f\n",area);
    }
    return 0;
}
