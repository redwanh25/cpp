#include<bits/stdc++.h>
using namespace std;
int reverse(int *p,int i, int n)
{
    if(i<n){
        reverse(p,i+1,n);
        cout<<p[i]<<" ";
        if(i==0)
            cout<<endl;
    }
}
int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    reverse(a,0,n);
 //   cout<<endl;
    return 0;
}
