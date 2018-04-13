#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    string str;
    cin>>n;
    cin.get();
    while(n--){
        getline(cin,str);
        for(int i=0; str[i]!='\0'; i++){
            if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
                str[i]=str[i]+3;
        }
        reverse(str.begin(),str.end());
        for(int i=str.length()/2.0; str[i]!='\0'; i++)
            str[i]=str[i]-1;
            cout<<str<<endl;
    }
    return 0;
}
