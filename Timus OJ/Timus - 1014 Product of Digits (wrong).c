#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    long n,i,k,l,m,y,x,z,temp;
    while(scanf("%ld",&n)!=EOF){
            x=sqrt(n);
    long ck=0,j=0,a[10000];
        for(i=2; i<=x; i++){
            if(n%i==0){
                y=i;
                z=n/i;
            char s[50],s1[50];
                ltoa(y,s,10);
                ltoa(z,s1,10);
                strcat(s,s1);
                a[j++]=atol(s);
            ck=1;
            }
        }
        if(ck==1){
            for(k=0; k<1; k++){     // i want to just smallest number.
                for(l=1+k; l<j; l++){
                    if(a[k]>a[l]){
                        temp=a[l];
                        a[l]=a[k];
                        a[k]=temp;
                    }
                }
            }
            printf("%ld\n",a[0]);
        }
        else
            printf("-1\n");
    }
    return 0;
}
