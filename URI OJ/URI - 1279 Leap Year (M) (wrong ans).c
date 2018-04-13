#include<stdio.h>
int main()
{
    long long n,h,b,l;
    while(scanf("%lld",&n)!=EOF){
        if((n%400==0 || (n%4==0 && n%100!=0)) && n%15==0 && n%55==0){
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
            printf("This is bulukulu festival year.\n\n");
        }
        else if((n%400==0 || (n%4==0 && n%100!=0)) && n%15==0){
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n\n");
        }
        else if((n%400==0 || (n%4==0 && n%100!=0)) && n%55==0){
            printf("This is leap year.\n");
            printf("This is bulukulu festival year.\n\n");
        }
        else if(n%15==0 && n%55==0){
            printf("This is huluculu festival year.\n");
            printf("This is bulukulu festival year.\n\n");
        }
        else if(n%400==0 || (n%4==0 && n%100!=0))
            printf("This is leap year.\n\n");
        else if(n%15==0)
            printf("This is huluculu festival year.\n\n");
        else if(n%55==0)
            printf("This is bulukulu festival year.\n\n");
        else if(!(n%400==0 || (n%4==0 && n%100!=0)) && n%15!=0 && n%55!=0)
            printf("This is an ordinary year.\n\n");
    }
    return 0;
}
