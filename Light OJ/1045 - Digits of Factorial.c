 #include<stdio.h>
 #include<math.h>
 double a[1000005];
 int main()
 {
     long long n,m,x,y,j,i,digit;
     for(j=1; j<=1000005; j++)
            a[j]=a[j-1]+log(j);
        scanf("%lld",&n);
     for(i=1; i<=n; i++){
        scanf("%lld %lld",&x,&y);
        digit=(long long)(a[x]/log(y))+1;
        printf("Case %lld: %lld\n",i,digit);
     }
     return 0;
 }
