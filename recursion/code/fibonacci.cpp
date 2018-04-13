#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    int a = fibonacci(n-1);
    int b = fibonacci(n-2);
    return a + b;    ///  return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int n,res;
    while(cin>>n){
    res = fibonacci(n);
    cout<<res<<endl<<endl;
    }
    return 0;
}
