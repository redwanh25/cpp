#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[10] = "13";
    char s1[100];
    sprintf(s1, "%s", s);
    strcat(s1, "1");
    cout << s1;
    return 0;
}
