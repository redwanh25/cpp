
/// i'm not sure. but, result to same ashe...

#include <iostream>
using namespace std;

int fact(int i, int mod)
{
    if(i == 0){
        return 1;
    }
//    return (i * fact((i-1), mod)) % mod;
    return ((i % mod) * (fact((i-1), mod) % mod)) % mod;
}

int main()
{
    int f, mod;
    cin >> f >> mod;
    cout << fact(f, mod) << endl;
    return 0;
}
