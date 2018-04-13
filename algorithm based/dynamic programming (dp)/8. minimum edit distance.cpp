#include <iostream>
using namespace std;

int edit_distance(string s1, string s2, int l1, int l2)
{
    int m[l1+1][l2+1];

    for(int i = 0; i <= l1; i++){
        for(int j = 0; j <= l2; j++){
            if(i == 0){
                m[i][j] = j;
            }
            else if(j == 0){
                m[i][j] = i;
            }
            else if(s1[i-1] == s2[j-1]){
                m[i][j] = m[i-1][j-1];
            }
            else{
                m[i][j] = 1 + min(m[i][j-1], min(m[i-1][j-1], m[i-1][j]));
            }
        }
    }
    return m[l1][l2];
}

int main()
{
    string s_make = "sunday";
    string s_change = "saturday";

    cout << edit_distance(s_make, s_change, s_make.length(), s_change.length()) << endl;
    return 0;
}
