#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    while(scanf("%d",&n)!=EOF && n){
        i=1;
        while(i*i*i*i*i*i<=n){
            if(pow(i,6)==n){
                cout<<"Special"<<endl;
                break;
                }
              i++;
            }
        if(pow(i,6)!=n)
            cout<<"Ordinary"<<endl;
    }
    return 0;
}
