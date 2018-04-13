#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[1000],s1[1000]="";
    while(gets(s)){
        strcat(s1,s);
    }
    cout<<s1<<endl;


    return 0;
}
