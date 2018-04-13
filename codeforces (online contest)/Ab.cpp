#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool ck = false;
    cin >> s;
    int ln = s.length();
    reverse(s.begin(), s.end());
    if(ln <= 6){
        cout << "no" << endl;
        return 0;
    }
    int l = 0, i = 0;
    while(i < ln){
        if(s[i++] == '0'){
            l++;
        }
    }
  //  if(l <)
    for(int i = 0; i < ln; i++){
        if(s[i] == '1'){

        }
    }
    cout << ( ck ? "yes" : "no" ) << endl;
    return 0;
}
