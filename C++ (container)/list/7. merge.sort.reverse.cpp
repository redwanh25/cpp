#include <iostream>
#include <list>         ///  first.reverse();
#include <vector>
#include <deque>
#include <algorithm>    ///  reverse(.... , ....);
using namespace std;

bool cmp(double a, double b)
{
    return (a < b);
}

int main()
{

    std::list<double> first, second;

    first.push_back (3.1);
    first.push_back (2.2);
    first.push_back (2.9);

    second.push_back (3.7);
    second.push_back (7.1);
    second.push_back (1.4);

    first.sort();       // first & second dui tai sort korte hobe.
    second.sort();      // noile merge korar shomoy sort akare pabo na.

    first.merge(second);
//  second is now empty;

    second.push_back(2.1);

    first.merge(second, cmp);

    for(auto it = first.begin(); it != first.end(); it++){
        cout << *it << endl;
    }
    cout << endl;

   /// first.reverse();                        /// #include <list>

    auto it = first.begin();
    advance(it,3);
    reverse(it, first.end());    /// #include <algorithm>

  //  reverse(first.begin()+4, first.end());  /// aita kaj kore na

    for(auto it = first.begin(); it != first.end(); it++){
        cout << *it << endl;
    }

    cout << endl << first.size() << " " << second.size() << endl;
    /// first = 6       &       second = 0 (second is now empty)

    return 0;
}
