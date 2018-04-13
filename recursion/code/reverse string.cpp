#include<iostream>
using namespace std;
void func(char s[], int i)
{
    if(s[i]!='\0'){
        func(s, i+1);
        cout<<s[i];
    }
}
int main()
{
    char s[]="redwan";
    func(s,0);
    cout<<endl;
    return 0;
}
