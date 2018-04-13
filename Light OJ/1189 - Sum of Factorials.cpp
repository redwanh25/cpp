#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int j,k;
void func(long long *fa)
{
    long long f;
    fa[0]=1;
    for(j=1; j<=20; j++){
        long long f=1;
        for(k=1; k<=j; k++)
            f*=k;
            fa[j]=f;
    }
}
int main()
{
    int n,i,p,l,r,s,t;
    long long m,fact[20],ff[20];
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>m;
        long long x=0,y=0,z=0;
        func(fact);
        cout<<"Case "<<i<<": ";
        for(r=0; r<=20; r++){
            x+=fact[r];
            if(x>=m)
                break;
            }
        for(l=r,p=0; l>=0; l--){
            y+=fact[l];
            if(y<=m){
                ff[p++]=l;
            }
            else if(y>m)
                y-=fact[l];
            }
        for(s=0; s<p; s++)
            z+=fact[ff[s]];
        if(z!=m){
            cout<<"impossible"<<endl;
        }
        else if(z==m){
        cout<<ff[--p]<<"!";
        for( ; --p>=0; )
            cout<<"+"<<ff[p]<<"!";
            cout<<endl;
        }
    }
    return 0;
}
