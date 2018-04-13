#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
/// ios::sync_with_stdio(0), cin.tie(0);  ai line ta thakle
/// cout<<s; ai ta nisse na. but, cout<<s<<endl; aita nisse.
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    while(cin>>n){
        string s;
        while(n){
            s += n%2 + '0';
            n/=2;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}

/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 //   ios::sync_with_stdio(0), cin.tie(0);  ai line ta thakle cout<<s; ai ta nisse na. but, cout<<s<<endl; aita nisse.
    int n;
    while(cin>>n){
        char s[1000];
        int i=0;
        while(n){
            s[i++] = n%2 + '0';
            n/=2;
        }
        s[i]='\0';
        reverse(s,s+i);
        cout<<s<<endl;
    }


    return 0;
}
*/
