#include <iostream>
#include <queue>
using namespace std;

int main()
{
    pair <int, string> s;
    queue <pair <int, string> > r;

    s.first = 5;
    s.second = "redwan";
    r.push(s);

    s.first = 8;
    s.second = "sharar";
    r.push(s);

    r.push(make_pair(1, "ramij"));
    r.push(make_pair(3, "foteh"));

    pair <int, string> p;

    while(!r.empty()){

        p = r.front();

        cout << r.front().first << " " << r.front().second << endl;
        cout << p.first << " " << p.second << endl << endl;

        r.pop();
    }

    return 0;
}
