#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    char s[1000];
    while(gets(s)){
        for(i=0; s[i]!='\0'; i++){
            s[i]=s[i]-7;
        }
        cout<<s<<endl;
    }
    return 0;
}
