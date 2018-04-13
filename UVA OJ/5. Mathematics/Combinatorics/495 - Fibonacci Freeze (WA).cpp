#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned long long a[5005];
    int n,i;
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            printf("The Fibonacci number for 0 is 0\n");
        }
        else{
            a[0]=0;
            a[1]=1;
            for(i=2; i<=n; i++){
                a[i]=a[i-2]+a[i-1];
            }
            printf("The Fibonacci number for %d is %llu\n", n, a[i-1]);
        }
    }
    return 0;
}
