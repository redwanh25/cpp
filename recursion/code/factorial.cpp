#include<iostream>
#include<cstdio>
using namespace std;
int f_call=0;
int fact(int n)
{
    f_call+=1;
    if(n==0)
        return 1;
 //   cout<<n<<" ";
    return n*fact(n-1);
 //   cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<f_call<<endl;
    return 0;
}
