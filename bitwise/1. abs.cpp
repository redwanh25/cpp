#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;


/* This function will return absoulte value of n*/
unsigned int getAbs(int n)
{
    int mask = n >> (sizeof(int) * CHAR_BIT - 1);

    cout << mask << " " << CHAR_BIT << endl;
    cout << (n + mask) << " " << ((n + mask) ^ mask) << endl;

    return ((n + mask) ^ mask);
/// return ((n + (n >> 31)) ^ (n >> 31));
}

/* Driver program to test above function */
int main()
{
    int n = -16;
    printf("Absoute value of %d is %u", n, getAbs(n));
    return 0;
}
/*

n        = -10    (11111111 11110110)
mask     =  -1    (11111111 11111111)
n + mask = -11    (11111111 11110101)

     11111111 11110101
   ^ 11111111 11111111
----------------------
10 = 00000000 00001010

10 = -11 ^ -1
16 = -17 ^ -1
67 = -68 ^ -1
45 = -46 ^ -1
********************************************

n        =  10    (00000000 00001010)
mask     =   0    (00000000 00000000)
n + mask =  10    (00000000 00001010)

     00000000 00000000
   ^ 00000000 00001010
----------------------
10 = 00000000 00001010

10 = 10 ^ 0

*/
