#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,a,ar,br,d;
    cin>>n>>k;
        ar=0; br=0,d=0;
        for(int i=0; i<n; i++){
            cin>>a;
            ar+=a;
            if(ar>=8){
                ar-=8;
                br+=8;
                ++d;
            }
            else{
                ar-=a;
                br+=a;
                ++d;
            }
            if(br>=k){
                cout<<d<<endl;
                return 0;
            }
        }
        if(br<k)
            cout<<"-1"<<endl;
    return 0;
}
