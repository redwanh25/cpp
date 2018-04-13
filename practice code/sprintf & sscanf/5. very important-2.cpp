/* sscanf example */
#include <stdio.h>

int main ()
{
  char sentence []="Rudolph is 12 13 years old";
  char str [20];
  int i, j;

  sscanf (sentence,"%s %*s %d %d", str, &i, &j);
  printf ("%s -> %d %d\n", str, i, j);

  return 0;
}
