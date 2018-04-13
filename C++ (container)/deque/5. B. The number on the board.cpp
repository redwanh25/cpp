#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
    deque <int> r;
    string s;
    int i, k, sum = 0;
    cin >> k >> s;
    sort(s.begin(), s.end());
    for(i = 0; i < s.size(); i++){
        r.push_back(s[i] - '0');
        sum += r.back();
    }
    for(i = 0; i < s.size(); i++){
        if(k <= sum){
            break;
        }
        sum = sum - r.front() + 9;
        r.pop_front();
    }
    cout << i << endl;
    return 0;
}

