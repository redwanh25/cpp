#include <bits/stdc++.h>
using namespace std;

void print(char exp, deque <char> S, string postfix)
{
    string red;
    cout << setw(10) << fixed << left << exp;
    for(auto it = S.begin() ; it != S.end(); it++){
        red += *it;
    }
    cout << setw(20) << fixed << left << red;
    cout << setw(20) << fixed << left <<  postfix << endl;
}

int main()
{

  //  string s = "redwahsogdg";
    string a = "abcd";
    string s1 = "redwan";
    deque <char> s {'a','b','c','d'};
    for(int i = 0; i < s1.length(); i++){
        print(s1[i], s, a);
    }
 //   cout << setw(20) << fixed << left << s << setw(20) << fixed << left <<  s1 << endl;
 //   cout << setw(10) << fixed << left << mystring << setw(10) << fixed << right <<  mystring << endl;
    return 0;
}
