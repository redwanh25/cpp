#include<bits/stdc++.h>
using namespace std;
int a[31623];
int main()
{
    int k=0;
    for(int i=1; i*i<=1000000000; i++){
        a[k++] = i*i;
    }
    int n,t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);
        for(int j=0; j<k; j++){
            if(a[j]%n == 0){
                printf("Caso #%d: %d\n",i,a[j]);
                break;
            }
        }
    }
    return 0;
}
