#include<stdio.h>
int main()
{
    int wall,pattern,i,s,a,b;
    while(scanf("%d",&wall)!=EOF && wall){
            a=0,b=1;
        for(i=1; i<=wall; i++){
            s=a+b;
            a=b;
            b=s;
        }
        printf("%d\n",s);
    }
    return 0;
}
