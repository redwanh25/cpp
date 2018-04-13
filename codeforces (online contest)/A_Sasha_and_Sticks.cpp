#include<iostream>
using namespace std;
int main()
{
    long long a,b,r;
    while(cin>>a>>b){
        r=a/b;
        if(r%2!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
