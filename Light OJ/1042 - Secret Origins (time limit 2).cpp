#include<iostream>
#include<cstring>
using namespace std;

char s[10000];
char s1[10000];
int c,ck;

int desimal_binary(int a);
int binary(int a);

int binary(int a)
{
    int b=a;
    int i=0,ln,ck=0;
    while(a!=0){
        s1[i++]=(a%2)+'0';
        a/=2;
    }
    s1[i]='\0';
 //   cout<<s1<<endl;
    ln=strlen(s1);
    for(i=0; i<ln; i++){
        if(s1[i]=='1')
            ++ck;
    }
 //   cout<<ck<<endl;
    if(c==ck)
        return b;
    else
        return binary(b+1);
}

int desimal_binary(int a)
{
    int b=a;
    int i=0,ln,res;
    while(a!=0){
        s[i++]=(a%2)+'0';
        a/=2;
    }
    s[i]='\0';
//    cout<<s<<endl;
    ln=strlen(s);
    for(i=0; i<ln; i++){
        if(s[i]=='1')
            ++c;
    }
//    cout<<c<<endl;
   return binary(b+1);
}

int main()
{
    int a,n,i,j,l,res;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>a;
        res=desimal_binary(a);
        cout<<"Case "<<i<<": "<<res<<endl;
        c=0,ck=0;
    }
    return 0;
}
