#include<stdio.h>
#include<string.h>
int count(char a[])
{
    return strlen(a);
}

int main()
{
    char s[10000];
    gets(s);
    printf("%d\n",count(s));
    return 0;
}
