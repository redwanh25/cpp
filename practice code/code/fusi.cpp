#include<iostream>
using namespace std;
long long *bigbigNumber(long long x)
{
    long long *a = new long long[2];
    *a = x*x;
    *(a+1) = x*x*x;
    return a;
}
int main()
{
    long long x,*a;
    while(cin >> x){
        a = bigbigNumber(x);
        cout<<"square = "<<a[0]<<endl<<"cube = "<<a[1]<<endl;
    }
    return(0);
}
