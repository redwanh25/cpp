#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    if(x%y==0)           ///  if(y==0)
        return y;        ///     return x;
    return gcd(y, x%y);  ///  return gcd(y, y%x);
}
int main()
{
    int a,b,res;
    cin>>a>>b;
    res=gcd(b,a);
    cout<<res<<endl;
    return 0;
}
