#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
void int_to_char(long long x, char *s)
{
    long long i,j,k,p=0,ln;
        while(x!=0){
            s[p++]=x%10+'0';
            x/=10;
        }
    s[p]='\0';
        cout<<s[1]<<endl;
    return;
}
int main()
{
    long long n,i,j,m;
    cin>>n;
    for(i=1; i<=n; i++){
        char s[1000];
        cin>>m;
        m*=567;
        m/=9;
        m+=7592;
        m*=235;
        m/=47;
        m-=498;
        if(m<0)
            m=abs(m);
        int_to_char(m,s);
    }
    return 0;
}
