#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    while(n--){
        char s[10];
        cin>>s;
        if(strlen(s)==3){
            if(s[i]=='o' && s[i+1]=='n'){
                cout<<"1"<<endl;
            }
            else if(s[i+1]=='n' && s[i+2]=='e'){
                cout<<"1"<<endl;
            }
            else if(s[i]=='o' && s[i+2]=='e'){
                cout<<"1"<<endl;
            }
            else if(s[i]=='t' && s[i+1]=='w'){
                cout<<"2"<<endl;
            }
            else if(s[i+1]=='w' && s[i+2]=='o'){
                cout<<"2"<<endl;
            }
            else if(s[i]=='t' && s[i+2]=='o'){
                cout<<"2"<<endl;
            }
        }
        else{
            cout<<"3"<<endl;
        }
    }
    return 0;
}
