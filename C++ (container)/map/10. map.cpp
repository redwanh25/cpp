#include <bits/stdc++.h>
using namespace std;
int main()
{
 //   map <int, pair <char, string> > r;
    multimap <int, pair <char, string> > r;

    r.insert(make_pair(2, make_pair('a', "redwan")));
    r.insert(make_pair(3, make_pair('b', "redwan")));
    r.insert(make_pair(4, make_pair('d', "redwan")));
    r.insert(make_pair(3, make_pair('e', "redwan")));
    r.insert(make_pair(4, make_pair('c', "redwan")));
    r.insert(make_pair(5, make_pair('f', "redwan")));

    for(auto it = r.begin(); it != r.end(); it++){
        cout << it -> first << " " << it -> second.first << " " << it -> second.second << endl;
    }

    return 0;
}
