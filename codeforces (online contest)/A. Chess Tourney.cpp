#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n*2];
    for(int i=0; i<n*2; i++){
        scanf("%d",&a[i]);
    }
    sort(a, a+n*2);
    if(a[n-1] == a[n])
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
