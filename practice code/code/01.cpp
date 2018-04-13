#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin.get();
    while(n--){
        int c = 0 , k = 1;
        getline(cin, s);
        for(int i = 0; i < s.length(); i++){
            if( s[i] == '1'){
                c = k;
                if(c == 2){
                    break;
                }
            }
            else if(c == 1 && s[i] == '0'){
                k = 2;
            }
        }
        if(c == 2 || c == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
