#include<stdio.h>
int main()
{
    char a[100];
    int i;
    scanf("%[^\n]",a);
    for(i=0; a[i]!='\0'; i++){
    if(a[i]>='a' && a[i]<='z')
        a[i]='A'+(a[i]-'a');
    }
    printf("%s",a);
    return 0;
}

