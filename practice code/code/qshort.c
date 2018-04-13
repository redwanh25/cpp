#include <stdio.h>
#include <stdlib.h>

int values[] = { 88, 56, 100, 2, 25,3,12,4,89,50,36,100,88 };

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n;

   printf("Before sorting the list is: \n");
   for( n = 0 ; n < 13; n++ )
   {
      printf("%d ", values[n]);
   }

   qsort(values, 13, sizeof(int), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for( n = 12 ; n >= 0; n-- )
   {
      printf("%d ", values[n]);
   }

   return(0);
}
