#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,x,a,b,i,column,row;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>x;
        a=ceil(sqrt(x));
        b=a*a;
        if(b-x+1<=a)
            column=b-x+1;
        else
            column=a;
        if(b-x+1<=a)
            row=a;
        else
            row=a*2-(b-x)-1;
        if(a%2!=0)
            cout<<"Case "<<i<<": "<<column<<" "<<row<<endl;
        else
            cout<<"Case "<<i<<": "<<row<<" "<<column<<endl;
    }
    return 0;
}
