/// http://codeforces.com/problemset/problem/746/B

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    deque <char> red;
    string s;
    int n;
    cin >> n >> s;
    if(n & 1){
        for(int i = 0; i < n; i++){
            if(i & 1){
                red.push_front(s[i]);
            }
            else{
                red.push_back(s[i]);
            }
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if(i & 1){
                red.push_back(s[i]);
            }
            else{
                red.push_front(s[i]);
            }
        }
    }
    for(auto it = red.begin(); it != red.end(); it++){
        cout << *it;
    }
    cout << endl;
    return 0;
}
