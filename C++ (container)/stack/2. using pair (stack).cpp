#include <iostream>
#include <stack>
using namespace std;

int main()
{
    pair <int, string> s;
    stack <pair <int, string> > r;

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

        p = r.top();

        cout << r.top().first << " " << r.top().second << endl;
        cout << p.first << " " << p.second << endl << endl;

        r.pop();
    }

    return 0;
}

