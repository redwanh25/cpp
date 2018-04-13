#include<stdio.h>
#include<math.h>
int len_m,i;
int func1(char s[100])
{
    for(i=0; s[i]!='\0'; i++)
        len_m++;
    return len_m;
}
int main()
{
    char s[100];
    gets(s);
    printf("%d",func1(s));
    return 0;
}
