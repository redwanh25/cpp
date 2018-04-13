#include<iostream>
using namespace std;
void sum(int a,int b, int *sum)
{
    *sum=a+b;
}
int main()
{
    int a=5,b=6,add;
    sum(a,b,&add);
    cout<<add<<endl;
    return 0;
}
