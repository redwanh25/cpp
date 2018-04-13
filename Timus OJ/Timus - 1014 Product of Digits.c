#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k;
    while(scanf("%d",&n)!=EOF){
    int ck=1,j=0;
    char s[10],s1[10];
        if(n==0)
            printf("10\n");
        else if(n==1)
            printf("1\n");
        else{
            while(ck==1 && n!=1){
                 ck=0;
                for(i=9; i>1; i--){
                    if(n%i==0){
                        s[j++]=i+'0';
                        n/=i;
                        ck=1;
                        break;
                    }
                }
            }
            if(ck==1){
            for(k=0; --j>=0; k++){
                s1[k]=s[j];
                printf("%c",s1[k]);
                }
                printf("\n");
            }
            else
                printf("-1\n");
        }
    }
    return 0;
}
