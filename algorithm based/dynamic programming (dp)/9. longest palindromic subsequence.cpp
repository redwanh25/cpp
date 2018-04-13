#include <iostream>
using namespace std;

int LPS(string s, int n)
{
    int m[n][n];

    for(int i = 0; i < n; i++){
        m[i][i] = 1;
    }
    for(int l = 2; l <= n; l++){
        for(int i = 0; i <= n-l; i++){
            int j = i+l-1;
            if(s[i] == s[j] && l == 2){
                m[i][j] = 2;
            }
            else if(s[i] == s[j]){
                m[i][j] = 2 + m[i+1][j-1];
            }
            else{
                m[i][j] = max(m[i][j-1], m[i+1][j]);
            }
        }
    }
    return m[0][n-1];
}

int main()
{
    string s = "GEEKS FOR GEEKS";

    cout << LPS(s, s.size()) << endl;
    return 0;
}
