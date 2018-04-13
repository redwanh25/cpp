#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,c=0,l;
    char s[10000];
    while(gets(s)){
        l=strlen(s);
        for(i=0;i<l;i++){
            if(s[i]=='"'){
                c=c+1;
                if(c%2==1)
                    cout<<"``";
                else
                    cout<<"''";
                }
            else
                cout<<s[i];
            }
            cout<<endl;
        }
    return 0;
}
