#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n=6;

    int *p;
    p=&n;

    int **q;
    q=&p;

    int ***r;
    r=&q;

    cout<<n<<" "<<*p<<" "<<*(*q)<<" "<<*(*(*r))<<endl;
    cout<<&n<<" "<<p<<" "<<*q<<" "<<*(*r)<<endl;
    cout<<&p<<" "<<q<<" "<<*r<<endl;
    cout<<&q<<" "<<r<<endl;
    cout<<&r<<endl;
    return 0;
}

/**

    *(*(*r))    = *(*q)    = *p     =  n  = 6
      *(*r)     =   *q     =  p(&n)       = 225
        *r      =    q(&p)                = 215
         r(&q)                            = 205
        &r                                = 230

**/
