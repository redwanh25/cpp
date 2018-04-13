#include <stdio.h>
void func(int *a, int *b);
 int main()
{
   int x, y;
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   printf("Before \nx = %d\ny = %d\n", x, y);
   func(&x, &y);
   printf("After \nx = %d\ny = %d\n", x, y);
   return 0;
}
void func(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a= temp;
}
