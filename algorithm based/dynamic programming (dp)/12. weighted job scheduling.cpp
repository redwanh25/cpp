/// made by nije

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector < pair < int, pair <int , int> > > v;

int job()
{
    int n = v.size();
    int k[n];
    for(int i = 0; i < n; i++){
        k[i] = v[i].second.second;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(v[j].first <= v[i].second.first){    /// end time <= start time (not overlap)
                k[i] = max(k[i], k[j] + v[i].second.second);
            }
        }
    }
    return *max_element(k, k+n);
}

int main()
{
    int s, e, wt, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s >> e >> wt;
        v.push_back(make_pair(e, make_pair(s, wt)));
    }
    sort(v.begin(), v.end());   /// work er end time wise sorted thakte hobe...
    cout << job() << endl;

    return 0;
}

/*

tushar ray
6
1 3 5
7 9 2
4 6 5
2 5 6
5 8 11
6 7 4
output: 17

geeksforgeeks
4
3 10 20
1 2 50
6 19 100
2 100 200
output: 250

*/
