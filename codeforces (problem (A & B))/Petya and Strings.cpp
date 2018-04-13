#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, ss1, ss2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] >= 65 && s1[i] <= 90){
            ss1 += ('a' + s1[i] - 'A');
        }
        else{
            ss1 += s1[i];
        }
        if(s2[i] >= 65 && s2[i] <= 90){
            ss2 += ('a' + s2[i] - 'A');
        }
        else{
            ss2 += s2[i];
        }
    }
    cout << ss1.compare(ss2) << endl;
    return 0;
}
