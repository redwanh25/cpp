#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int a[2000000];

int qsort(const void *a, const void *b)
{
    return ((*(int *)a) - (*(int *)b));
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n){
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        qsort(a, n, sizeof(int), qsort);
        printf("%d",a[0]);
        for(int i=1; i<n; i++){
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
