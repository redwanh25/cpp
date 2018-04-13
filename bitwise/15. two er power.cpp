#include<bits/stdc++.h>
using namespace std;

int main()
{

/*
index = 0 dile hobe na. cause,

2^0 = 1     look at this line. jodi index = 0 hoto, taile ki kono vabe possible
            j 2 er emon kono power er jonno result 0 hobe? so, index = 1 theke
            shuru korte hobe.
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
.......

*/

    int n = 500, index = 8;

    while(index <= n){
        cout << index << " ";
        index += (index & (-index));
    }
    cout << endl;

/// output : 1 2 4 8 16 32 64 128 256

    return 0;
}

/*

(index & (-index))

 1 &  -1 =  1
 2 &  -2 =  2
 4 &  -4 =  4
 8 &  -8 =  8
16 & -16 = 16
32 & -32 = 32
64 & -64 = 64

*/


