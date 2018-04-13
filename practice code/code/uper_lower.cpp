#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string s="AbCdEfGhIjKlMnOpQrStUvWxYz";
   // string p;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i] & 95;    ///  s += s[i] & 95;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] | 32;    ///  s += s[i] | 32;
        }
    }
    cout<<s<<endl;
    return 0;
}
