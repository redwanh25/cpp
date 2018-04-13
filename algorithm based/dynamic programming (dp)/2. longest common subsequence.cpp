#include <iostream>
using namespace std;

int lcs(string s, string s1)
{
    int ln = s.size();
    int ln1 = s1.size();
    int k[ln+1][ln1+1];
    for(int i = 0; i <= ln; i++){
        for(int j = 0; j <= ln1; j++){
            if(i == 0 || j == 0){
                k[i][j] = 0;
            }
            else if(s[i-1] == s1[j-1]){
                k[i][j] = k[i-1][j-1] + 1;
            }
            else{
                k[i][j] = max(k[i][j-1], k[i-1][j]);
            }
        }
    }
    return k[ln][ln1];
}

int main()
{
    string s = "redwan";
    string s1 = "wrdxan";
    cout << lcs(s, s1) << endl;
    return 0;
}
