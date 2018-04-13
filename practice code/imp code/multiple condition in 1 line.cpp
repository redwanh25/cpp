#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n = 4, m = 5;
    printf( n < 5 ? n < 2 ? "n" : "m" : "z");
    return 0;
}

/// 0 ? 0 ?   ""    :   ""    : "print" ;
/// 0 ? 1 ?   ""    :   ""    : "print" ;
/// 1 ? 0 ?   ""    : "print" :   ""    ;
/// 1 ? 1 ? "print" :   ""    :   ""    ;
