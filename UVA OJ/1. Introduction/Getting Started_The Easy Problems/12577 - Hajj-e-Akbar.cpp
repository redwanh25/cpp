#include<iostream>
using namespace std;
int main()
{
    int ck=0;
    string s;
    while(cin>>s){
        if(s=="*")
            break;
        else if(s=="Hajj"){
            cout<<"Case "<<++ck<<": Hajj-e-Akbar"<<endl;
        }
        else if(s=="Umrah"){
            cout<<"Case "<<++ck<<": Hajj-e-Asghar"<<endl;
        }
    }
    return 0;
}
