/// http://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/
/// C++ program to find modular inverse of a under modulo m

#include<iostream>
using namespace std;

/// A naive method to find modulor multiplicative inverse of
/// 'a' under modulo 'm'

int modInverse(int a, int m)
{
    a = a % m;
    for (int x=1; x<m; x++){
       if ((a*x) % m == 1){
          return x;
       }
    }
}

int main()
{
    int a = 3, m = 11;
    cout << modInverse(a, m) << endl;
    return 0;
}



/// Input:  a = 3, m = 11
/// Output: 4
/// Since (4*3) mod 11 = 1, 4 is modulo inverse of 3
/// One might think, 15 also as a valid output as "(15*3) mod 11"
/// is also 1, but 15 is not in ring {0, 1, 2, ... 10}, so not
/// valid.
///
/// Input:  a = 10, m = 17
/// Output: 12
/// Since (10*12) mod 17 = 1, 12 is modulo inverse of 3

