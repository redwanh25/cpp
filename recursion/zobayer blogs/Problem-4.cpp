#include<bits/stdc++.h>
using namespace std;
void func(int i,int n)
{
    if(i<n){
        if(i==0)
            cout<<"1";
        else if(i==1)
            cout<<" + x";
        else
            cout<<" + x^"<<i;
        func(i+1,n);
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        func(0,n);
        cout<<endl;
    }
    return 9;
}
