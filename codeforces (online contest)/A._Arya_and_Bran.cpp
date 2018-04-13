#include<bits/stdc++.h>
using namespace std;
int main()
{
    int br,d=-1,n,k,a,ar;
    ar=0;
    br=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>a;
        ar+=a;
        if(ar>=8){
            ar-=8;
            br+=8;
        }
        else{
            br+=ar;
            ar=0;
        }
        if(d==-1 && br >= k){
            d=i;
        }
    }
    cout<<d<<endl;
    return 0;
}
