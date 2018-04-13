#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int n;
    while(cin>>n){
    n+=1;
    cin.get();
    int max=0,x=0;
    while(n--){
        c=cin.get();
        if(c>='A' && c<='Z')
            ++x;
        if(c==' ' || c=='\n'){
            if(max<x)
                max=x;
            x=0;
        }
    }
    cout<<max<<endl;
    }
    return 0;
}
