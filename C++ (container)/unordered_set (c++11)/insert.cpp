#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    unordered_set <int> r;

    r.insert(1);
    r.insert(5);
    r.insert(3);
    r.insert(6);
    r.insert(4);
    r.insert(2);

    for(auto it = r.begin(); it != r.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
