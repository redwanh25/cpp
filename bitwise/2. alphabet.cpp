#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] | 32;       /// capital to small.
        //  s[i] = 'a' + (s[i] - 'A');
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] & 95;       /// small to capital.
        //  s[i] = 'A' + (s[i] - 'a');
        }
    }
    cout << s << endl;

    return 0;
}

