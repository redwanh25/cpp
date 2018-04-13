#include <iostream>
#include <climits>
using namespace std;

int LCS(string s, string s1)
{
    int ln = s.length();
    int ln1 = s1.length();
    int m[ln][ln1], res = 0;
    for(int i = 0; i < ln; i++){
        for(int j = 0; j < ln1; j++){
            if(i == 0 || j == 0){
                m[i][j] = 0;
            }
            else if(s[i-1] == s1[j-1]){
                m[i][j] = m[i-1][j-1] + 1;
                res = max(res, m[i][j]);
            }
            else{
                m[i][j] = 0;
            }
        }
    }
    return res;
}

int main()
{
    string s = "redwan";
    string s1 = "xedwfn";
    cout << LCS(s, s1) << endl;

    return 0;
}
