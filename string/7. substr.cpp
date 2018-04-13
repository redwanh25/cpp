#include<iostream>
#include<string>
#include<iterator>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string str="We think in generalities, but we live in details.";
    string s=str.substr(12,12);
    string::size_type pos=str.find("live");
    cout << pos << endl;
    string s1=str.substr(pos);
    string s2 = str.substr(pos, 4);
    cout<< s << endl << s1 << endl << s2 <<endl;

    return 0;
}
