#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch = 'A';
    char ch1 = 'a';
    ch = tolower(ch);       /// ch = ch | 32;
    ch1 = toupper(ch1);     /// ch1 = ch1 & 95;

    cout << ch << " " << ch1 << endl;

    return 0;
}

