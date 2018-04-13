#include<stdio.h>
int main()
{
    char s[100];
    int sum=0,i;
    scanf("%s",s);
    for(i=0; s[i]!='\0'; i++){
        sum+=s[i]-'0';
    }
    printf("%d\n",sum);
    return 0;
}

/*#include<stdio.h>
int main()
{
    int sum=0,i,n;
    scanf("%d",&n);
    for( ; n>0; n/=10)
        sum+=n%10;
    printf("%d\n",sum);
    return 0;
}*/
