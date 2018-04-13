#include<iostream>
using namespace std;

int pointer(int *a)
{
    *a = *a + *a;
    return *a;
}

int biog(int x, int y)
{
    return (x-y);
}

int add(int x, int y)
{
    return (x+y);
}

int func(int (*ami)(int,int), int x, int y)
{
    return ami(x,y);
}

int main()
{
    int (*red) (int , int);
    red = add;                ///  red = &add;

    cout<< red(2,3) <<endl;   ///  cout<< (*red)(2,3) <<endl;

    cout<< func(add,13,3) <<endl;   ///  cout<< func(&add, 13, 3) <<endl;
    cout<< func(biog,2,3) <<endl;   ///  cout<< func(&biog, 2, 3) <<endl;

    int a=5;
    int (*p)(int *);
    p=pointer;
    cout<< p(&a) <<endl;

    return 0;
}
