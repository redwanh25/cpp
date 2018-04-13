#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string red;
    char s[100];
    getline(cin,red);
 //   int ln=red.copy(s,2,4);   /// 2=length. 4=position(0 theke start).
    string::size_type ln=red.copy(s,2,4);                           ///  size_t ln=red.copy(s,2,4);
    s[ln]='\0';               /// int r size_t maybe ake e kotha.
    cout<<s<<" "<<red<<" "<<ln<<" "<<sizeof(size_t)<<" "<<sizeof(int)<<endl;
    return 0;
}

/*
string red;
string s;
getline(cin,red);
s=red;
//s te red copy hoye gelo.
*/
