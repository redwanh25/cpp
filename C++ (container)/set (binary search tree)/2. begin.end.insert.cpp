#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set <int> r;

    r.insert(10);
    r.insert(4);
    r.insert(1);
    r.insert(10);

    for(auto it = r.begin(); it != r.end(); it++){
        cout << *it << endl;
    }
    cout << endl;

    return 0;
}
