#include<iostream>
using namespace std;
int main()
{
    long long m,n,res;
    cin>>m;
    while(m--){
        cin>>n;
        res=(n+1)*(n+1)-1;
        cout<<res<<endl;
    }
    return 0;
}
