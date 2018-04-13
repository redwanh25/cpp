#include <stdio.h>
#include <math.h>

int main()
{
   char str[80];

   sprintf(str, "Value of Pi = %LD", M_PI);
   puts(str);

   return(0);
}
