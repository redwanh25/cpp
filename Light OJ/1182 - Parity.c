#include<stdio.h>
#include<math.h>
int main()
{
    long long i,n,j,k,a,x,y,z,ck,sum,m,ck1,p;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        scanf("%lld",&x);
        ck=0,ck1=0,sum=0;
        for(j=0; j<=x; j++){
            if(pow(2,j)>x)
                break;
           ck++;
        }
    char s[ck];
        for(k=ck-1,m=0; k>=0; k--,m++){
           sum+=pow(2,k);
             if(sum<=x)
                s[m]='1';
             else{
                s[m]='0';
                sum-=pow(2,k);
             }
      }
      s[m]='\0';
    for(p=0; p<ck; p++){
        if(s[p]=='1')
        ck1++;
    }
    if(ck1%2==0)
        printf("Case %lld: even\n",i);
    else
        printf("Case %lld: odd\n",i);
    }
    return 0;
}
