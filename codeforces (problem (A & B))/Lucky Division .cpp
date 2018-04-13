#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int charToInt(string s)
{
    int x = 0, ln = s.length();
    for(int i = ln-1, k = 0; i >= 0; i--){
        x += pow(10, i) * (s[k++] - '0');
    }
    return x;
}

bool check(int x)
{
    string s;
    int n, i = 0;
    while(x != 0){
        s += ((x % 10) + '0');
        x /= 10;
    }
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '4' && s[i] != '7'){
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    for(int j = 0; j < s.length(); j++){
        if(s[j] != '4' && s[j] != '7'){
            int x = charToInt(s);
            for(int i = 1; i <= 1000; i++){
                if(x % i == 0){
                    if(check(i)){
                        cout << "YES" << endl;
                        return 0;
                    }
                }
            }
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
