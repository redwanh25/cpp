#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a;
    cin >> a;
//  if(fmod(a,1) == 0.0)
//  if(trunc(a) == a)
//  if(round(a) == a)
    if(roundf(a) == a)
        cout<< "int" <<endl;
    else
        cout<< "float" <<endl;
    return 0;
}
