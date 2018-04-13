#include<iostream>
using namespace std;
int main()
{                                               ///    1  2  3  4
    int b[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};   ///    5  6  7  8
    int (*p)[4]=b;                              ///    9 10 11 12
    cout<< *(*p+1) <<endl;
    cout<< *(*(p+1)+2) <<endl;
    cout<< *(*p+3) <<endl;
    cout<< *(*p)  <<endl;
    cout<< ++(*(*(p+2)+3)) <<endl;
    cout<< *(*(b+2)) <<endl;
    cout<< *(b+2) <<endl;       /// address of b[2] or &b[2][0]
    cout<<   b[2] <<endl;
    cout<< &b[2][0] <<endl;
    cout<< *(b[1]+3) <<endl;
    cout<<   b[1]+3 <<endl;     /// address of &b[1][3]
    cout<< p[0][2]<<endl;
    cout<< *(*(p+2)+3) <<endl;
    cout<< b[2][3] <<endl;
    return 0;
}
