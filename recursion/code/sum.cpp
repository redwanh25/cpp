#include<bits/stdc++.h>
using namespace std;
int sum(int a)
{
    if(a==1)
        return 1;
    return a+sum(a-1);
}

int main()
{
    int n,x;
    cin>>n;
    x=sum(n);
    cout<<x<<endl;
    return 0;
}
