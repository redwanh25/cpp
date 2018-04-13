#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h1,m1,h2,m2,h3,m3,h4,m4;
    int i,j,k,n;
    cin>>n;
    for(i=1; i<=n; i++){
        scanf("%lf:%lf %lf:%lf",&h1,&m1,&h2,&m2);
        scanf("%lf:%lf %lf:%lf",&h3,&m3,&h4,&m4);
        m1/=100.00;
        h1+=m1;
        m2/=100.00;
        h2+=m2;
        m3/=100.00;
        h3+=m3;
        m4/=100.00;
        h4+=m4;
        if(h1>h4 || h2<h3)
            cout<<"Case "<<i<<": Hits Meeting"<<endl;
        else
            cout<<"Case "<<i<<": Mrs Meeting"<<endl;
    }
    return 0;
}

