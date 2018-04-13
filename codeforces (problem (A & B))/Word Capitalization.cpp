#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] = 'A' + (s[0] - 'a');
    cout << s << endl;
    return 0;
}

