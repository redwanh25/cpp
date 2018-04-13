#include<iostream>
using namespace std;
///unsigned long long ma=ULONG_LONG_MAX;
int ma;
int func(int *a,int i,int n)
{
    if(i<n){
      //  if(ma<a[i])
       //     ma=a[i];
       (ma < a[i]) ? ma=a[i] : false ;
        return func(a,i+1,n);
    }
    return ma;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    x=func(a,0,n);
    cout<<x<<endl;
    return 0;
}

/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    vector<int> a(10,10);
    int x;
    for(int i=0; i<5; i++){
        cin>>a.at(i);
    }
    x=a[0];
    for(int i=1; i<5; i++){
        x=min(x,a.at(i));
    /// x=max(x,a[i]);
    }
    cout<<x<<" "<<a.at(7)<<endl;
    return 0;
}
*/
