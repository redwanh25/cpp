#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long n,i,j,a,ck;
    char s[65530];
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        ck=0;
        scanf("%lld",&a);
    lltoa(a,s,2);
 //   printf("%s\n",s);
    for(j=0; s[j]!='\0'; j++){
        if(s[j]=='1')
            ck++;
    }
    if(ck%2==0)
        printf("Case %lld: even\n",i);
    else
        printf("Case %lld: odd\n",i);
    }
    return 0;
}

