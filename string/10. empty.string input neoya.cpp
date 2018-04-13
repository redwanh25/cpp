#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string red,red1;
    do{
        getline(cin,red);
    //    cout<<red[4]<<endl;
        red1 += red + '\n';
    }while(!red.empty());
    cout<<red1<<endl;
    return 0;
}
