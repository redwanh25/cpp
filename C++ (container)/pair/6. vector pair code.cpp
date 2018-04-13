#include <bits/stdc++.h>

using namespace std;
int main()
{
    //freopen("in3.txt","r",stdin);
    int t,i,j,m,p,n,d,a,b;
    double z ,f;
    vector<pair <double,pair <int ,int > > >v;
    cin>>t;
    for(i=1;i<=t;++i){
        m=p=0;
        f=0;
        cin>>n>>d;

        for(j=0;j<n;++j){
            cin>>a>>b;
            f=(a*100)/b;
            m+=b;
            p+=a;
            v.push_back(make_pair(f,make_pair(a,b)));
        }
        sort(v.begin(),v.end());

        for(i=0;i<d;++i){
            m-=v[i].second.second;
            p-=v[i].second.first;
        }
        f=(double)(p*100)/m;
        if (roundf(f) == f){
            cout<<f<<endl;
        }
        else {
            printf("%0.9lf\n",f);
        }
        v.clear();
    }
}
