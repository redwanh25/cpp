#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set < pair <char, int> > r;

    r.insert(pair <char, int> ('a', 1));
    r.insert(make_pair('c', 3));
    r.insert(make_pair('d', 6));

    r.insert(make_pair('e', 2));    /// ai dui ta line er dui ta element
    r.insert(make_pair('e', 2));    /// & onno line er dui ta element same hole akta thakbe.

    r.insert(make_pair('d', 9));

    for(auto it = r.begin(); it != r.end(); it++){
        cout << it -> first << " " << (*it).second << endl;
    }
    cout << endl << endl;

    set < pair <int, char> > r1;

    r1.insert(pair <int, char> (1, 'a'));
    r1.insert(make_pair(5, 'e'));
    r1.insert(make_pair(2, 'd'));
    r1.insert(make_pair(2, 'f'));
    r1.insert(make_pair(4, 'd'));
    r1.insert(make_pair(2, 'd'));

    for(auto it = r1.begin(); it != r1.end(); it++){
        cout << it -> first << " " << (*it).second << endl;
    }

    cout << endl << endl;

    set <char> r2;

    r2.insert('a');
    r2.insert('e');
    r2.insert('c');
    r2.insert('f');
    r2.insert('d');
    r2.insert('d');

    for(auto it = r2.begin(); it != r2.end(); it++){
        cout << *it << endl;
    }

    return 0;
}
