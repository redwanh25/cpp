#include<bits/stdc++.h>
using namespace std;
int a[26];
int main()
{
    int l;
    string s;
    getline(cin,s);
    cin>>l;
    int ln = s.length();
    int sum=0,sm=0;
    if(l>ln)
        cout<<"impossible"<<endl;
    else{
        for(int i=0; i<s.length(); i++){
            ++a[s[i]-'a'];
            if(a[s[i]-'a']==1){
                sum+=1;
            }
        }
        if(sum>=l)
            cout<<"0"<<endl;
        else{
            cout<<l-sum<<endl;
        }
    }
    return 0;
}
