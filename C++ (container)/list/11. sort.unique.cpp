#include<iostream>
#include<list>
using namespace std;
int main()
{
    double a[]={ 12.15,  2.72, 73.0,  12.77,  3.14,
                       12.77, 73.35, 72.25, 15.3,  72.25 };
    std::list<double> red (a,a+10);

    red.sort();             //  2.72,  3.14, 12.15, 12.77, 12.77,
                            // 15.3,  72.25, 72.25, 73.0,  73.35
    /// you must need to sort
    /// otherwise unique function does not work

    red.unique();           //  2.72,  3.14, 12.15, 12.77
                             // 15.3,  72.25, 73.0, 73.35
    list<double> :: iterator it= red.begin();
    for( ; it!=red.end(); it++)
        cout<<*it<<"   ";
    return 0;
}
