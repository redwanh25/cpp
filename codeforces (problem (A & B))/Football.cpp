#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ck = 0, ck1 = 0;
    int a = s.length();
    for(int i = 0; i < a-6; i++){
        if(s[i] == '0'){
            for(int j = i; j < i+7; j++){
                if(s[j] == '1'){
                    ck = 0;
                    break;
                }
                ck++;
            }
 //           cout << ck << " *" << endl;
        }
        else if(s[i] == '1'){
            for(int j = i; j < i+7; j++){
                if(s[j] == '0'){
                    ck1 = 0;
                    break;
                }
                ck1++;
            }
  //          cout << ck1 << endl;
        }
        if(ck >= 7 || ck1 >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
