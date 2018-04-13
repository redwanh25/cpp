#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char ch = 107;
    char a = ch << 1;
    char b = ch << 2;
    char c = ch >> 1;
    char d = ch >> 2;

    printf("%d %c\n", a, a);
    printf("%d %c\n", b, b);
    printf("%d %c\n", c, c);
    printf("%d %c\n", d, d);

    return 0;
}
