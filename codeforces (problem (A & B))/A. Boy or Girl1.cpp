#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    string s2;
    cin >> s2;
    char s[s2.length()];
    for(int i = 0; i < s2.length(); i++){
        s[i] = s2[i];
    }
    list <char> s1(s, s + s2.length());
    s1.sort();
    s1.unique();
    if(s1.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else cout << "IGNORE HIM!" << endl;
}

