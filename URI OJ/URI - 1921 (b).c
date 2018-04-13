#include <stdio.h>
int main() {

    long long int a,n;
    while(scanf("%lld", &n)!=EOF){
    a=(n*(n-3))/2;
    printf("%lld\n",a);
    }
    return 0;
}
