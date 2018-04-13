/// GCD and LCM...

#include<iostream>
#include<cstdio>
using namespace std;

int GCD(int a, int b)
{
    if(a % b == 0){
        return b;
    }
    return GCD(b, a % b);

///	return b ? gcd(b, a % b) : a;
}

int LCM(int a, int b, int m)
{
    if((a * m) % b == 0){
        return (a*m);
    }
    return LCM(a, b, m+1);
}

int main()
{
    int x, y, a, b;
    while(cin >> a >> b){
        x = GCD(a, b);
        y = LCM(a, b, 1);
        cout<< x << " " << y <<endl;
    }
    return 0;
}
