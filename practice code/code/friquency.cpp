#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    getline(cin,s);
    int ln=s.length();
    int a[ln];
    for(int i=0; i<ln; i++)
        a[i]=1;
    for(int i=0; s[i]!='\0'; i++){
        for(int j=i+1; j<ln; j++){
            if(s[i]==s[j]){
                ++a[i];
                s.erase(j,1);
                j--;
            }
        }
        cout<<s[i]<<" = "<<a[i]<<endl;
    }
    return 0;
}
