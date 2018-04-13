#include<bits/stdc++.h>
using namespace std;
int a[26];
int main()
{
    int n,sum=0;
    cin>>n;
    cin.get();
    while(n--){
        int k=0,sm=0;
        string s;
        getline(cin,s);
        for(int i=0; i<s.length(); i++){
            ++a[s[i]-'a'];
        }
        for(int i=0; i<s.length(); i++){
            sm += a[s[i]-'a'];
                ++k;
            if(sm>=15){
                break;
            }
        }
        for(int i=0,j=1; i<k; i++,j++){
            sum += a[i]*j;
        }
        cout<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}
