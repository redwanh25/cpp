#include<bits/stdc++.h>
using namespace std;
int x=1;
void func(int y)
{
    y=y*2;
    x=x+10;
    cout<<y<<" "<<x<<endl;
}
int main()
{
    int y=5;
    x=10;
    cout<<y<<" "<<x<<endl;
    func(y);
    cout<<y<<" "<<x<<endl;
    return 0;
}
