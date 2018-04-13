#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstdio>
using namespace std;
int main()
{
    time_t t;
    srand( (unsigned) time(&t) );  /// time(&t) "get current time"
    for(int i=0; i<3; i++)
        printf("%d\n",rand());
   // cout<<time(&t)<<endl;
    return 0;
}
