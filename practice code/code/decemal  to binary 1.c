#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,j,k;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
        printf("0\n");
    else{
            int i=0,sum=0;
        while(pow(2,i)<=n){
            i++;
        }
        char s[i];
        for(j=i-1,k=0; j>=0; j--,k++){
            if(n>=(sum+=pow(2,j)))
                s[k]='1';
            else{
                s[k]='0';
                sum-=pow(2,j);
            }
        }
        s[k]='\0';
        printf("%s\n",s);
        }
    }
    return 0;
}
