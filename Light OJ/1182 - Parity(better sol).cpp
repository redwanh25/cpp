#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x,i=0,n;
    scanf("%d",&x);
    while(x--){
        scanf("%d",&n);
        int c=0;
        while(n){
            if(n & 1){
                c++;
            }
            n=n>>1;
        }
    // cout<<"Case "<<++i<<": "<<((c & 1) ? "odd" : "even")<<endl;
       printf("Case %d:",++i);
       printf((c & 1) ? " odd\n" : " even\n");
    }
    return 0;
}
