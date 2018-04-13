#include<iostream>
using namespace std;
int main()
{
    int n, c = 1;
    cin >> n;
    string s[n];
    cin >> s[0];
    for(int i = 1; i < n; i++){
        cin >> s[i];
        if(s[i-1][1] == s[i][0]){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
