#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main()
{
    int n, m, sum = 0, sum1 = 0, i;
    cin >> n;
    deque <int> r;
    for(i = 0; i < n; i++){
        cin >> m;
        r.push_back(m);
        sum += r.back();
    }
    sort(r.begin(), r.end(), cmp);
    for(i = 1; i <= n; i++){
        sum1 += r.front();
        r.pop_front();
        if(sum1 > (sum - sum1)){
            break;
        }
    }
    cout << i << endl;
    return 0;
}

