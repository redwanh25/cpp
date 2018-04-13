#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[2000000];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n){
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        printf("%d",a[0]);
        for(int i=1; i<n; i++){
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
