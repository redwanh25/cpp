#include<iostream>
#include<cstdio>
using namespace std;
int print(int n)
{
    if(n==0)
        return 1;
    cout<<n<<" ";
      print(n-1);
/// cout<<n<<" ";
}
int main()
{
    int i,j,n;
    cin>>n;
    print(n);
    return 0;
}
