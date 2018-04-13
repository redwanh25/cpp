#include<stdio.h>
#define limit 2147483647
int binarySearch(long long a[],int l,int h,long long n)
{
    while(l<=h){
        int m=(h+l)/2;
        if(a[m]==n)
            return 1;
        if(n<a[m])
            h=m-1;
        else
            l=m+1;
    }
    return 0;
}
int main()
{
    long long i,t,n,a[65540],num=1,inc=1,c=0;
    a[c]=num;
    while(1){
        if(num > limit)
            break;
        num+=inc++;
        a[++c] = num;
    }
    scanf("%lld",&t);
    for(i=1; i<=t; i++){
        scanf("%lld",&n);
        printf("%d ",binarySearch(a,0,65536,n));
    }
    return 0;
}
