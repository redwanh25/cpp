#include<iostream>
using namespace std;
int main()
{
    char note[]="redwan hossain";
    char *p;
    p=note;
    cout<<note<<endl;
    p[10]='\0';     /// note[10]='\0';  same kaj hoito.
    cout<<p++<<endl;
    cout<<++p<<endl;
    cout<<--*(p+3)<<endl;
    cout<<p<<endl;
    cout<<note<<endl;
    cout<<++*(p-1)<<endl;
    cout<<p<<endl;
    cout<<note<<endl;
    p[4]='\0';
    cout<<p<<endl;
    cout<<note<<endl;
    return 0;
}

