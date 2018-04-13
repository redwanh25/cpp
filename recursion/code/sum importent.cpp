#include<bits/stdc++.h>
using namespace std;
int sum(int a)
{
    if(a==2)
        return 7;
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
