#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    int i,j,k,ck,x,n,fact,fact1,ck1;
    double sum,res,res1;
    while(scanf("%d %d",&x,&n)!=EOF){
            ck=0,ck1=0,fact=1,fact1=1,sum=0;
        for(i=0; i<n*2; i+=2){
            if(ck==0){
                for(j=1; j<=i; j++)
                  fact*=j;
                  res=pow((x*(pi/180)),i)/fact;
                  sum+=res;
                ck++;
            }
            else if(ck1==0){
                for(k=1; k<=i; k++)
                  fact1*=k;
                  res1=pow((x*(pi/180)),i)/fact1;
                  sum-=res1;
                ck=0;
            }
        }
        printf("Cos(x)= %lf\n",sum);
    }
    return 0;
}
