#include<bits/stdc++.h>
using namespace std;
int main()
{
    char *s;
    s=(char *)calloc(100,1);
    int j;
    gets(s);
    for(int i=0; s[i]!='\0'; i++){
        while(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z' || s[i]=='\0'))){
            for( j=i; s[j]!='\0'; ++j){
                s[j]=s[j+1];
            }
             s[j]='\0';
             cout<<s<<endl;
        }
    }
    cout<<s<<endl;
    return 0;
}
///  p2'r''o@gram84iz./
