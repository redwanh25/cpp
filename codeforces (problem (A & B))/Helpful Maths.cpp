#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s, s1;
    cin >> s;
    for(int i = 0; i < s.length(); i += 2){
        s1 += s[i];
    }
    sort(s1.begin(), s1.end());
    for(int i = 1; i < s.length(); i += 2){
        s1.insert(i, "+");
    }
    cout << s1 << endl;
    return 0;
}
