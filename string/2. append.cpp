#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string red,red1,red2;
    getline(cin,red1);      ///     redwan
    getline(cin,red2);      ///     hossain
    red.append(red1);
    cout<<red<<endl;        ///     redwan
    red.append(red,3,2);
    cout<<red<<endl;        ///     redwanwa
    red1.append("ami 2mk chai",3);
    cout<<red1<<endl;       ///     redwanami
    red.append("bye");
    cout<<red<<endl;        ///     redwanwabye
    red2.append(5,'.');
    cout<<red2<<endl;       ///     hossain.....
    red2.append(red.begin()+3, red.end());
    cout<<red2<<endl;       ///     hossain.....wanwabye
    return 0;
}
