#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n){
        int a[n][n];
        bool t=true;
        for(int i=0; i<n; i++){
            for(int k=1+i; k>1; k--){
                if(k==i+1){
                    printf("%3d",k);
                }
                else{
                    printf("%4d",k);
                }
            }
            int x=n-i;
            for(int j=1; j<=x; j++){
                if(i==0){
                    printf("%3d",j);
                    i++;
                }
                else{
                    printf("%4d",j);
                }
            }
            if(t){
                i--;
                t=false;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
