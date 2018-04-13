#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,n,m,c,c1,c2;
    cin>>n;
    m=n;
    for(j=1; j<=n-1; j++)
        cout<<"(";
    for(i=1; i<=n; i++){
            c=0;
        for(k=1; k<=i; k++){
        cout<<"sin("<<k;
        if(k!=i){
            if(c==0){
                cout<<"-";
                c=1;
            }
            else if(c==1){
                cout<<"+";
                c=0;
              }
            }
        else{
            for(l=1; l<=i; l++)
                cout<<")";
            }
        }
        cout<<"+"<<m;
        if(m--!=1)
            cout<<")";
    }
    cout<<endl;
    return 0;
}
