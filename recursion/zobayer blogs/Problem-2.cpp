/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<=(n-1)/2; i++)
        cout<<a[i]<<" "<<a[n-(i+1)]<<endl;
    return 0;
}
*/

/// resursion

#include<bits/stdc++.h>
using namespace std;
void func(int *p,int i,int n)
{
    if(i<=n){
        cout<<p[i]<<" ";
        cout<<p[n]<<endl;
      func(p,i+1,n-1);
    }
    /*
    if(i>(n-1)/2)
        return;  // terminate
    cout<<p[i]<<" ";
    cout<<p[n-(i+1)]<<endl;
    func(p,i+1,n);
    */
}
int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    func(a,0,n-1);
    return 0;
}
