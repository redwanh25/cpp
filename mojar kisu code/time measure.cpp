#include<iostream>
#include<ctime>
using namespace std;

void redwan(int i, int j)
{
    int x;
    x = i*j;
}

int main()
{
    int j;
    clock_t start, en_d;
    double time;
    start= clock();
    for(int i=0; i<1e8; i++);
   ///     redwan(4,6);
    en_d= clock();
    time=(double)(en_d-start)/CLOCKS_PER_SEC;
    cout<<time<<endl;
    return 0;
}
