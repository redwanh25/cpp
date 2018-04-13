#include<bits/stdc++.h>
using namespace std;
int main()
{

    double b,c,d,e,a,f;
    int day;
    while(cin>>b>>c>>d>>e){
        if(b==0 && c==0 && d==0 && e==0)
            return 0;
        day=1;
        a=0;
        f=(c*(e/100.0));
        while(1){
            a+=c;
            if(c>0)
                c-=f;
            if(a>b)
                break;
            a-=d;
            if(a<0)
                break;
            ++day;
        }
        if(a<0)
            cout<<"failure on day "<<day<<endl;
        else
            cout<<"success on day "<<day<<endl;
    }
    return 0;
}
