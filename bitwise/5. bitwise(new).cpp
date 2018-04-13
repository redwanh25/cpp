#include<iostream>
#include<string>
using namespace std;

char up(char ch)
{
    return ch & 95;
}
char lo(char ch)
{
    return ch | 32;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string s="AbCdEfGhIjKlMnOpQrStUvWxYz";
    for(int i=0; i<26; i++){
      //  cout<<up(s[i])<<endl;
        cout<<lo(s[i])<<endl;
    }

    return 0;
}
