#include<iostream>
#include<cstdio>
using namespace std;
int print(int n)
{
 //   cout<<n<<" ";
    if(n==2)
        return 7;
 //   cout<<n<<" ";
    return n*print(n-1);
 //   cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    cout<<print(n)<<endl;
    return 0;
}
