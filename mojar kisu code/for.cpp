#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int> a;
    int n, m = 0;
    for(int i = 0; i < 5; i++) cin >> n, a.push_back(n), m = max(m, n);
    while(!a.empty()) cout << a.front() << " ", a.pop_front();

    return 0;
}
