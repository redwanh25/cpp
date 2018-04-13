#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=14,j,k=2;
    char s[129],s1[200];
    scanf("%s",s);
    strcpy(s1,s);
    itoa(i,s,10);
    j=pow(k,3);
    cout<<s1<<" "<<s<<" "<<j<<endl;
    return 0;
}

