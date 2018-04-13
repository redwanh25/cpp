/// set a reverse/sort function kaj kore na.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {75, 23, 65, 42, 13, 1, 0, -1, -4};
    set <int> r(a, a + (sizeof(a)/sizeof(a[0])));
    set <int> r1;

///    set <int, greater <int> > r(a, a + (sizeof(a)/sizeof(a[0])));
///    set <int, greater <int> > r1;
/// for descending order


    r.insert(2);
    r1 = r;
    r.erase(42);        /// direct value o erase kora jay

    auto it1 = r.begin();
    auto it2 = r.begin();
    advance(it1, 2);
    advance(it2, 4);
    r.erase(it1, it2);

    if(r.count(2) == 1){
        cout << "2 ase" << endl << endl;
    }

    auto it = r.begin();
    advance(it, 4);     // 75
    r.erase(it);

    it = r.find(65);
    if(it != r.end()){
        r.erase(it);    /// abr iterator diyeo erase kora jay
    }

    for(it = r.begin(); it != r.end(); it++){
        cout << *it << endl;
    }
    cout << endl;
    for(it = r1.begin(); it != r1.end(); it++){
        cout << *it << endl;
    }
    cout << endl;

    r1 = set <int>();    /// r1 ke empty kore dibe;
//   r1 = set <int, greater <int> >();    /// r1 ke empty kore dibe;
///  r1.clear();         /// aitao same kaj korbe;

    cout << r.size() << " " << r1.size() << endl;
    cout << r.empty() << " " << r1.empty() << endl;
    cout << r.max_size() << " " << r1.max_size() << endl;


    return 0;
}
