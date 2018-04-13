/// list & deque iterator er khetre same. ai dui ta "iterator" vector theke alada.
/// so, "list" folder er "insert(list vs vector)important.cpp" & "erase.advance.cpp"
/// ai dui ta code dekhte paro.

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int> r;
    for(int i = 0; i < 10; i++){
        r.push_back(i);     // 0 1 2 3 4 5 6 7 8 9
    }                      ///       ^
    auto it = r.begin();
    it += 3;
    for(int i = 0; i < r.size(); i++){
        cout << r[i] << " ";    // 0 1 2 3 4 5 6 7 8 9
    }
    cout << endl;

    cout << *(it) << endl;  // 3
    it = r.erase(it);       // 0 1 2 4 5 6 7 8 9
                           ///       ^
    for(int i = 0; i < r.size(); i++){
        cout << r[i] << " ";    // // 0 1 2 4 5 6 7 8 9
    }
    cout << endl;

    cout << *(it) << endl;  // 4
    it = r.erase(it);       // 0 1 2 5 6 7 8 9
                           ///       ^
    for(int i = 0; i < r.size(); i++){
        cout << r[i] << " ";    // 0 1 2 5 6 7 8 9
    }
    cout << endl;

    /// uporer tuku porjonto thik ase. iterator dhore rakhte hole amader
    /// ai vabe "it = r.erase(it)" e kaj korte hobe.
    /// nicher moto kore korle iterator haray jabe and ultapalta hoye jabe.

/// ===========================================


    cout << *(it) << endl;    // 5
    r.erase(it);              // 0 1 2 5 6 7 8 9
                             ///     ^
    for(int i = 0; i < r.size(); i++){
        cout << r[i] << " ";        // // 0 1 2 6 7 8 9
    }
    cout << endl;

    cout << *(it) << endl;    // 2
    r.erase(it);              // 0 1 6 7 8 9
                             ///   ^
    for(int i = 0; i < r.size(); i++){
        cout << r[i] << " ";    // 0 1 6 7 8 9
    }
    cout << endl;

    cout << *(it) << endl;
    r.erase(it);

    for(int i = 0; i < r.size(); i++){
        cout << r[i] << " ";
    }
    cout << endl;
    return 0;
}

