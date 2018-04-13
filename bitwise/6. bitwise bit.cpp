#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x=5,i=1;
    if(x&(1<<i)==0)
        cout<<"0";
    else
        printf("%d",1<<i);
    return 0;
}
