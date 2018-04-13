#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool c = true;
    getline(cin, s);
    for(int i = 1; i < s.length() ; i++){
        if(!(s[i] >= 'A' && s[i] <= 'Z')){
            c = false;
            break;
        }
    }
    if(c){
        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0] = 'A' + (s[0] - 'a');
        }
        else if(s[0] >= 'A' && s[0] <= 'Z'){
            s[0] = 'a' + (s[0] - 'A');
        }
        for(int i = 1; i < s.length(); i++){
            s[i] = 'a' + (s[i] - 'A');
        }
        cout << s << endl;
    }
    else{
        cout << s << endl;
    }
}

/*
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool change = true;
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (s[i] >= 'a')
        {
            change = false;
            break;
        }
    }

    if (change)
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] >= 'a')
            {
                s[i] -= ('a' - 'A');
            }
            else
            {
                s[i] += ('a' - 'A');
            }
        }
    }

    cout << s << endl;
    return 0;
}
*/
