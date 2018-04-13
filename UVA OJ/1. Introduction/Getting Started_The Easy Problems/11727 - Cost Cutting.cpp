#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b>>c;
        if(a>b && a<c)
            cout<<"Case "<<i<<": "<<a<<endl;
        else if(b>a && b<c)
            cout<<"Case "<<i<<": "<<b<<endl;
        else if(c>a && c<b)
            cout<<"Case "<<i<<": "<<c<<endl;
        else if(a<b && a>c)
            cout<<"Case "<<i<<": "<<a<<endl;
        else if(b<a && b>c)
            cout<<"Case "<<i<<": "<<b<<endl;
        else if(c<a && c>b)
            cout<<"Case "<<i<<": "<<c<<endl;
    }

    return 0;
}
