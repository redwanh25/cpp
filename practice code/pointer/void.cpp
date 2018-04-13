#include<iostream>
using namespace std;
int main()
{
    int a, *p=&a;
  //  a=5;
    void *x;
    x=&a;  /// x=p;
    a=6;
    cout<<*p<<" "<<*(int *)x<<endl;

    return 0;
}
