#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int s = 13;
    char s1[100];
    sprintf(s1, "%d", s);
    strcat(s1, " 1");
    cout << s1;
    return 0;
}
