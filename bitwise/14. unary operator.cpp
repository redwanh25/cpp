/// "~" means 1's complement

#include <iostream>
using namespace std;
int main()
{
    int a;
    a = -3;
    int b = ~a;
    cout << b << endl;
    return 0;
}

/*
input 5. output -6.
 5 = 00000000 00000101
-6 = 11111111 11111010       // bit gulo "0" thakle "1" hoye jay
                            // r "1" thakle "0" hoye jay.
input 2. output -3.
 2 = 00000000 00000010
-3 = 11111111 11111101

input -3. output 2.
-3 = 11111111 11111101
 2 = 00000000 00000010

*/
