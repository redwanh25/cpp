#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    string red;
    char c;
    do{
        c=cin.get();
        red+=c;
        if(c=='\n' || c=='.'){
            cout<<red<<endl;
            red.clear();
        }
    }while(c != '.');

    return 0;
}
