#include<bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    if(i<=n){
    // cout<<i<<" ";
        func(i+1,n);
        cout<<i<<" ";
    }
}

int main()
{
    int n,x,i=0;
    cin>>n;
    func(i,n);
    return 0;
}
