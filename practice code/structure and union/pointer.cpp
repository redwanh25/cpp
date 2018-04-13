#include<iostream>
using namespace std;

struct red
{
    int id;
};

void ami(red* a)
{
    ++ a->id;
}

int main()
{
    red x = {12};
    cout<< x.id <<endl;
    ami(&x);
    cout<< x.id <<endl;

    return 0;
}
