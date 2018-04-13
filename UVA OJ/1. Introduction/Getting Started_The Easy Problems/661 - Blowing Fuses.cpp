#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n,m,x,ck=0,c,a[10000];
    while(cin>>n>>m>>c){
    bool b[1000],red=true;
        if(n==0 && m==0 && c==0)
            return 0;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            b[i]=false;
        }
        int sum=0,max=0;
        for(int i=1; i<=m; i++){
            cin>>x;
            if(b[x]){
                sum-=a[x];
            }
            else{
                sum+=a[x];
                if(max<sum)
                    max=sum;
                if(sum>c)
                    red=false;
            }
            b[x]=!b[x];
        }
        if(red){
            cout<<"Sequence "<<++ck<<endl<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<max<<" amperes."<<endl<<endl;
        }
        else
            cout<<"Sequence "<<++ck<<endl<<"Fuse was blown."<<endl<<endl;
    }
    return 0;
}
