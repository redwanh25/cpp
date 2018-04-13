#include <iostream>
using namespace std;

int main()
{
    int fact = 1;
    int f, mod;
    cin >> f >> mod;
    for(int i = 1; i <= f; i++){
        fact = (fact * i) % mod;
///     fact = ((fact % mod) * (i % mod)) % mod;
    }
    cout << fact << endl;
    return 0;
}
