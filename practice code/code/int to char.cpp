#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=123456,i,j,k,l,p=0;
    char s[100],s1[100];
    while(x!=0){
        s[p++]=(x%10)+'0';
        x=x/10;
    }
    s[p]='\0';
    int ln=strlen(s);
    for(i=ln-1,j=0; i>=0; i--)
        s1[j++]=s[i];
    s1[j]='\0';
    cout<<s1<<endl;
//    for(i=0,j=0; i<ln; i++)
//        s[j++]=s1[i];
//    s[j]='\0';
//    cout<<s<<endl;
    return 0;
}
