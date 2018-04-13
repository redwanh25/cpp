#include <iostream>
#include <deque>
using namespace std;

int main()
{
    long long n, p, x, k, k1, m = 0;
    deque < pair <long long, long long> > r;
    cin >> n >> p;
    for(int i = 1; i <= n; i++){
        cin >> x;
        r.push_back(make_pair(x, 0));
        m = max(m, x);
    }
    if(n < p){
        cout << m << endl;
    }
    else{
        while(r[0].second < p){
            if(r[0].first > r[1].first){
                k = r[0].first;
                k1 = ++(r[0].second);
                r.erase(r.begin());
                r.push_front(make_pair(k, k1));
                r.push_back(make_pair(r[1].first, r[1].second));
                r.erase(r.begin()+1);
             //   cout << r[0].first << endl;
            }
            else{
                k = r[1].first;
                k1 = ++(r[1].second);
                r.push_back(make_pair(r[0].first, r[0].second));
                r.erase(r.begin(), r.begin()+2);
                r.push_front(make_pair(k, k1));
             //   cout << r[0].first << endl;
            }
        }
        cout << r[0].first << endl;
    }
    return 0;
}

