#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i < s.size(); i++){
        for(int j = i+1; j < s.size(); j++){
            for(int k = j+1; k < s.size(); k++){
                if(s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q'){
                    c++;
                }
            }
        }
    }
    cout << c << endl;
    return 0;
}
