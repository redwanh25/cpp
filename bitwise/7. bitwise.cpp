#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char c='A ';
    if((c & 0b100000)==0)
        cout<<"allah";
    if((c & 0b100000)==0b100000)
        cout<<"redwan";
    return 0;
}
