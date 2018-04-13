#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n,x=0;
    string s;
    getline(cin,s);
    int ln = s.length();
    for(int i=0,n=ln-1; i<ln; i++,n--){
        x += pow(10,n)*(s[i]-'0');
    }
    cout<<x<<endl;;
    return 0;
}
