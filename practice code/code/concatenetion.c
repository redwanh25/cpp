#include<stdio.h>
char func(char a[100],char b[100],char c[100])
{
    int i,j;
    for(i=0, j=0; a[i]!='\0'; i++,j++)
        c[j]=a[i];
    c[j]=' ';
    j++;
    for(i=0; b[i]!='\0'; i++,j++)
        c[j]=b[i];
        c[j]='\0';
    return c;
}
int main()
{
    char a[100],b[100],c[100];
    gets(a);
    gets(b);
    func(a,b,c);
    puts(c);
    return 0;
}
