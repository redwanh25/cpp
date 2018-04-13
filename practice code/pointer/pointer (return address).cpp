#include<iostream>
using namespace std;

void fu()
{
    cout<<"redwan"<<endl;   /// store in stack memory
}
/**
if you write this function then it will be not so good. and show you warning.
pic 14.2 , 14.2.1 , 14.2.2 dekho for Details.

int *func(int a, int b)
{
    int c = a+b;    // store in stack memory
    return &c;
}
**/
int *func(int a, int b)
{
    int *c = new int;   /// store in heap memory
    *c = a+b;
    return c;
}

int main()
{
    int *x;
    x = func(2,3);
    fu();
    cout<< *x <<endl;
    return 0;
}

