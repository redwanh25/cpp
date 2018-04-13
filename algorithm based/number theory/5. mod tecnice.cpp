#include <iostream>
using namespace std;
int main()
{
    int n = -17;
    int mod = 5;
    int f;

    f = ((n % mod) + mod ) % mod; /// n er value (-) hok r (+) hok,
                                  /// aita right.
    cout << f << endl;

    return 0;
}
