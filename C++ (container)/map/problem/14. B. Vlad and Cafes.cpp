/// http://codeforces.com/contest/890/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <long long, int> mp;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        mp[x] = i;
    }

//    for(auto it = mp.begin(); it != mp.end(); it++){
//        cout << it -> first << " " << it -> second << endl;
//    }

    pair <long long, int> red;

    red.first = mp.begin() -> first;
    red.second = mp.begin() -> second;

    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it -> second < red.second){   /// find min
            red.second = it -> second;
            red.first = it -> first;
        }
    }
    cout << red.first << endl;

    return 0;
}

