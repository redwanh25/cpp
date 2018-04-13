#include<iostream>
using namespace std;
int main()
{
    string s;
    int n;
    while(cin >> n){
        cin >> s;
        int ck = 0, ck1 = 0;
        int i;
        for(i = 0; i < n; i++){
            if(s[i] == 'S' && s[i+1] == 'F'){
                ck++;
            }
            else if(s[i] == 'F' && s[i+1] == 'S'){
                ck1++;
            }
        }
        if(ck > ck1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
