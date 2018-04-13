#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
//    freopen("read1/10812-Beat the Spread.txt","r",stdin);
    int i,j,k,l,n,x,y,r;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>x>>y;
        for(j=y,k=0; ; j++,k++){
            r=j+k;
            if(r==x){
                cout<<j<<" "<<k<<endl;
                break;
            }
            else if(r>x){
                cout<<"impossible"<<endl;
                break;
            }
        }
    }
    return 0;
}
