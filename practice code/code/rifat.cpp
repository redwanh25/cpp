#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100], i, j;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    strcat(s1," ");
    strcat(s1,s2);

    printf("After concatenation: %s", s1);

    return 0;
}
