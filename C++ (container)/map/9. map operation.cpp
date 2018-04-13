#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

main()
{
/*
    map <int, char> r {{3, 'a'},{1, 'b'},{6, 'c'},{2, 'd'},{6, 'e'}};

    /// 1 2 3 6 |6|     /// ai system a shobar  "" age ""  je map a dhuke she e thake, r baki shob
    /// b d a c |e|     /// duplicate key value gulo automatic remove hoye jay.).

*/
    map <int, char> r;
    int a[6];
    for(int i = 0; i < 5; i++){
        cin >> a[i];   /// 3 1 6 2 6
    }
    for(int i = 0; i < 5; i++){
       cin >> r[a[i]];  /// a b c d e
    }
    map <int, char> :: iterator it;
    for(it = r.begin(); it != r.end(); it++){
        cout << it-> first << " " << it->second << endl;

        /// 1 2 3 |6| 6     // shobar sheshe je map a dhuke she e thake, r baki shob
        /// b d a |c| e     // duplicate key value gulo automatic remove hoye jay.
    }
    return 0;
}

