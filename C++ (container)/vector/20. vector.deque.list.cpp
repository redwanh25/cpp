#include <iostream>
#include <list>
#include <vector>
#include <deque>

using namespace std;
int main()
{
    vector <int> r(4);
//  deque <int> r(4);
//  list <int> r(4);

    r[0] = 3;
    r[1] = 4;
    r[2] = 5;
    r[3] = 6;

    for (int i = 0; i < 4; i++){
        cout << r[i] << endl;
    }
    cout << endl << endl;

    while(!r.empty()){
        cout << *r.begin() << endl;
        r.erase(r.begin());
    }

/// "deque" & "vector" a ai vabe niye kaj kora jay.
/// kintu "list" a ai vabe niye kaj kkora jay na.

    return 0;
}
