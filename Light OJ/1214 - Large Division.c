#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    long i,j,k,l,n,m,x,sum,ck,q;
    char s[202],s1[202];
    scanf("%ld",&n);
    for(i=1; i<=n; i++){
        scanf("%s %ld",s,&x);
        sum=0,ck=0;
        if(s[0]=='-'){
        for(j=1; s[j]!='\0'; j++){
            if(ck==0){
                q=s[j]-'0';
       //         printf("%ld\n",q);
            }
            if(ck==1){
                q=q+(s[j]-'0');
       //         printf("%ld\n",q);
            }
            if(q<x){
                q=q*10;
                ck=1;
       //         printf("%ld\n",q);
            }
            else if(q>=x){
                q=q%x;
                q*=10;
                ck=1;
      //          printf("%ld\n",q);
            }
          }
          if(q==0)
            printf("Case %ld: divisible\n",i);
          else
            printf("Case %ld: not divisible\n",i);
        }
        else{
            for(j=0; s[j]!='\0'; j++){
            if(ck==0){
                q=s[j]-'0';
      //          printf("%ld\n",q);
            }
            if(ck==1){
                q=q+(s[j]-'0');
     //           printf("%ld\n",q);
            }
            if(q<x){
                q=q*10;
                ck=1;
     //           printf("%ld\n",q);
            }
            else if(q>=x){
                q=q%x;
                q*=10;
                ck=1;
      //          printf("%ld\n",q);
            }
          }
          if(q==0)
            printf("Case %ld: divisible\n",i);
          else
            printf("Case %ld: not divisible\n",i);
        }
    }
    return 0;
}
