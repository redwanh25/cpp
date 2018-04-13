#include<iostream>
using namespace std;
int main()
{
    long long i,j,n,m;
    cin>>n;
    while(n--){
        cin>>m;
        if(m%3==0 || m%3==2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
