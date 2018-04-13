#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int x,n,i,j,k,a[100],ln,max;
    char s[100][100];
    while(cin>>n && n){
    cin>>s[0];
    ln=strlen(s[0]);
    max=ln;
    for(i=1; i<n; i++){
        cin>>s[i];
        ln=strlen(s[i]);
        a[i]=ln;
        if(max<a[i])
            max=a[i];
    }
    for(i=0; i<n; i++){
        ln=strlen(s[i]);
        x=max-ln;
        for(j=1; j<=x; j++)
            cout<<" ";
        cout<<s[i]<<endl;
    }
    cout<<endl;
    }
    return 0;
}
