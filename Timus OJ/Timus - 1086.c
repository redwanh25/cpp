#include<stdio.h>
#include<math.h>
int main()
{
    long long a[15000],i,j,n,k=1,ck,x;
    a[0]=2;
    for(i=3; i<=163841; i++){
            ck=1;
        for(j=2; j<=sqrt(i); j++){
           if(i%j==0){
              ck=0;
              break;
           }
        }
     if(ck==1){
        a[k]=i;
        k++;
     }
    }
    scanf("%lld",&n);
    for(k=1; k<=n; k++){
        scanf("%lld",&x);
      printf("%lld\n",a[x-1]);
    }
    return 0;
}
