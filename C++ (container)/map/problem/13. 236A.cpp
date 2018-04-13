/*#include<iostream>
using namespace std;
int a[26], c;
int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(++a[s[i]-'a'] == 1){
            ++c;
        }
    }
    cout << ( c % 2 ? "IGNORE HIM!" : "CHAT WITH HER!" ) << endl;
    return 0;
}
*/

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <char, int> a;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        a.insert(pair <char, int> (s[i], 1));
    }
    cout << ( a.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!" ) << endl;
    return 0;
}

