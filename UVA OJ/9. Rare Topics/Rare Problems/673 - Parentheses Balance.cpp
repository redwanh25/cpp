#include<iostream>
#include<cstring>
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
 //   freopen("read1/673-Parentheses Balance.txt","r",stdin);
    int n,j;
    char s[130],c,d;
    cin>>n;
    getchar();
    for(int i=1; i<=n; i++){
        stack <char> red;
        gets(s);
        int ln=strlen(s);
        for(j=0; j<ln; j++){
            if(s[j]=='(' || s[j]=='['){
                red.push(s[j]);
               }
            else if(s[j]==')'){
                if(red.empty()){
                    red.push('r');
                    break;
                }
                else if(red.top()=='(')
                    red.pop();
                }
            else if(s[j]==']'){
                if(red.empty()){
                    red.push('r');
                    break;
                }
                else if(red.top()=='[')
                    red.pop();
                }
            }
        if(red.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

