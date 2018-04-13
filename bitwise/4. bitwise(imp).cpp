///tamim 2nd book page 95
/// 1182 - Parity (light oj)

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


///tamim 2nd book page 96
/*
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n,c=0, b= sizeof(int) * CHAR_BIT;
    cin>>n;
    for(int i=0; i<b; i++){
        if(n & (1<<i))
            c++;
    }
    cout<<c<<endl;
    return 0;
}
*/

///tamim 2nd book page 96

/*
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n,c=0, b= sizeof(int) * CHAR_BIT;
    int i;
    cin>>n>>i;
    if(n & (1<<i-1))
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
*/

