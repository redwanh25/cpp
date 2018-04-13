#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    int a[30000],b[30000];
    int n,i,j;
  //  memset(c,false,sizeof(c));
    while(cin>>n){
        bool c=true;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=1,j=0; i<n; i++,j++){
            b[j]=abs(a[j]-a[i]);
        }
        sort(b,b+j);
        for(i=0,j=1; i<n-1; i++,j++){
            if(b[i]!=j){
                c=false;
                break;
            }
        }
        if(c)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
        }
    return 0;
}
