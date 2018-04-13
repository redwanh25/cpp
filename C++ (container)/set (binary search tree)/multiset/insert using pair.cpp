#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    multiset < pair <char, int> > r;

    r.insert(pair <char, int> ('a', 1));
    r.insert(make_pair('e', 5));
    r.insert(make_pair('c', 4));
    r.insert(make_pair('f', 6));
    r.insert(make_pair('c', 4));
    r.insert(make_pair('b', 2));

    for(auto it = r.begin(); it != r.end(); it++){
        cout << it -> first << " " << (*it).second << endl;
    }
    return 0;
}
