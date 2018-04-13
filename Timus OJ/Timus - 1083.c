#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,ln,fact;
    char s[100];
    while(scanf("%d %s",&n,s)!=EOF){
            fact=1;
    ln=strlen(s);
        if(n%ln==0){
            for(i=n; i>=ln; i-=ln)
                fact*=i;
            }
        else{
            for(i=n; i>=(n%ln); i-=ln)
                fact*=i;
            }
        printf("%d\n",fact);
    }
    return 0;
}
