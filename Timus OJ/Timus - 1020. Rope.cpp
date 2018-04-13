//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,k,l,n;
    double a[102],sum=0.0,r;
    cin>>n>>r;
    for(i=1,j=0; i<=n; i++){
        cin>>a[j++];
        cin>>a[j++];
        }
    for(i=0; i<n*2; i+=2){
        if(i==(n*2)-2)
            sum+=sqrt(pow((a[i]-a[0]),2)+pow((a[i+1]-a[1]),2));
        else
            sum+=sqrt(pow((a[i]-a[i+2]),2)+pow((a[i+1]-a[i+3]),2));
        }
    cout<<fixed<<setprecision(2)<<sum+(2*acos(-1)*r)<<endl;
    return 0;
}
