#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
    string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    map <char, char> mp;
    for(int i=0; i<s1.size(); i++){
        mp[s1[i]]=s2[i];
    }
    string s;
    while(cin>>s){
        bool p=true, m=true;
        int n=s.size();
        for(int i=0; i<=n/2.0; i++){
            if(s[i]!=s[n-1-i])
                p=false;
            if(mp[s[i]]!=s[n-1-i])
                m=false;
        }
        if(!p && !m){
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
        }
        else if(p && !m){
            cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        }
        else if(!p && m){
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
        }
        else if(p && m){
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        }
    }
    return 0;
}
