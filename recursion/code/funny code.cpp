/// its called a one kind of recursion

#include<iostream>
using namespace std;
int a(int x);
int b(int x);
int c(int x);
int a(int x)
{
    x++;
    cout<<x<<" ";
    c(x);
}
int b(int x)
{
    x++;
    cout<<x<<" ";
    a(x);
}
int c(int x)
{
    x++;
    cout<<x<<" ";
    if(x==10)
        return 0;
    b(x);
}
int main()
{
    int x;
    c(0);
    return 0;
}
