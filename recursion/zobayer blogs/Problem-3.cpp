#include<bits/stdc++.h>
using namespace std;
int b[100];//k=0;
void func(int i,int a[],int n,int *kk)
{
    if(i<n){
        if(a[i]%2==0)
            a[(*kk)++]=a[i];
        func(i+1,a,n,kk);
    }
}

int main()
{
    int i,j,n,k=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    func(0,a,n,&k);
    for(i=0; i<k; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
