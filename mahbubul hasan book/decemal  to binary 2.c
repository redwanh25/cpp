#include<stdio.h>
int main()
{
    int n,i=2,x,l,k;
    while(scanf("%d",&n)!=EOF){
            int j=0;
            char s[10000];
        while(n>0){
            x=n%i;
            n/=i;
            s[j++]=x+48;
        }
        char s1[j];
        for(k=j-1,l=0; k>=0; k--,l++)
                s1[l]=s[k];
                s1[l]='\0';
            printf("%s\n",s1);
    }

    return 0;
}
