#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
/// priority_queue < pair <int, string> > q, r;
 //   priority_queue < pair <int, string>, vector < pair <int, string> > > q, r;
  priority_queue < pair <int, string>, vector < pair <int, string> >, greater < pair <int, string> > > q, r;

    q.push(make_pair(3, "redwan"));
    q.push(make_pair(5, "shihab"));

    q.push(make_pair(1, "nipu"));
    q.push(make_pair(1, "niau"));

    q.push(make_pair(7, "foteh"));

    r = q;

    pair <int, string> p;

    for(int i = 0; i < r.size(); i++){

        p = q.top();    /// priority_queue te front() operator nai. er bodole top() ase.

        cout << p.first << " " << p.second << endl;
        cout << q.top().first << " " << q.top().second << endl << endl;
        q.pop();
    }

    return 0;
}
