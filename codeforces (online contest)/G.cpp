#include<iostream>
using namespace std;
int main()
{
    int n;
    char s[1001][9];
    int ck = 0, mx = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < n; j++){
            if(s[j][i] == '1'){
                ++ck;
            }
        }
        mx = max(mx , ck);
        ck = 0;
    }
    cout << mx << endl;
    return 0;
}
