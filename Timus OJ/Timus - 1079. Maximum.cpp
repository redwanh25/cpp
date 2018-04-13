#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n){
        int a[n];
        a[0]=0;
        a[1]=1;
       int max=a[1];
    for(int i=1; i<=n/2; i++){
        a[2*i]=a[i];
        if(max<a[2*i])
            max=a[2*i];
            if(2*i==n)
                break;
        a[2*i+1]=a[i]+a[i+1];
        if(max<a[2*i+1])
            max=a[2*i+1];
        }
        cout<<max<<endl;
    }
    return 0;
}
