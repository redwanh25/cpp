#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    long i,j,k,n,m,ln,x;
    scanf("%ld",&x);
    for(i=1; i<=x; i++){
    scanf("%ld %ld",&m,&n);
    char s[100000];
    long fact=1;
    for(j=1; j<=m; j++)
        fact*=j;
//    printf("%ld\n",fact);
    ltoa(fact,s,n);
 //   printf("%s\n",s);
    ln=strlen(s);
    printf("%ld\n",ln);
    }
    return 0;
}
