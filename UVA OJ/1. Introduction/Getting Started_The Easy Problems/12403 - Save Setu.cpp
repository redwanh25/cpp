#include<iostream>
using namespace std;
int main()
{
    int n,taka,sum=0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s=="donate"){
            cin>>taka;
            sum+=taka;
        }
        else{
            cout<<sum<<endl;
        }
    }
    return 0;
}
