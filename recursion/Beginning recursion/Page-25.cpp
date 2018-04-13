#include<iostream>
using namespace std;

void recursion(int i, int j)
{
    if(j > i){
        cout << endl;
        return;
    }
    cout << "  " << i % 2;
    recursion(i, j+1);
}

void recursion1(int i)
{
    if(i > 5){
        return;
    }
    recursion(i, 1);
    recursion1(i+1);
}

int main()
{
    recursion1(1);
    return 0;
}
