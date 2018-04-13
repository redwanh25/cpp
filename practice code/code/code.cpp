#include<iostream>
#include<algorithm>
using namespace std;
int ck;
int func(int n)
{
    ++ck;
    if(n==1)
        return 1;
    if(n%2==0)
        return func(n/2.0);
    else
        return func(3*n+1);
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n,x,c,i,cc;
    while(cin>>n>>x){
        cc=0;
        if(n>x){
            swap(n,x);
            cc=1;
        }
        i=n;
        c=0;
        while(n<=x){
            ck=0;
            func(n);
            if(c<ck)
                c=ck;
            n++;
        }
    if(cc==0)
        cout<<i<<" "<<x<<" "<<c<<endl;
    else
        cout<<x<<" "<<i<<" "<<c<<endl;
    }
    return 0;
}
