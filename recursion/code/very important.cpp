#include<iostream>
using namespace std;
void Q(long l, long r)
{
    long n;
    if(l<r){
        n=--r;
   //     cout<<"1\n";
        Q(l,n);
          cout<<"1\n";
        Q(n+1,r);
          cout<<"2\n";
    }
    cout<<"3\n";
}
int main()
{
    Q(0,1);
    return 0;
}
