/*
#include<iostream>
#include<cmath>
using namespace std;
void func(int i,int n,int x,int *sum)
{
    if(i<n){
        *sum+=pow(x,i);
        func(i+1,n,x,sum);
    }
}
int main()
{
    int n,x,res=0;
    cin>>x>>n;
    func(0,n,x,&res);
    cout<<res<<endl;
    return 0;
}
*/

/*
#include<iostream>
#include<cmath>
using namespace std;
int func(int x,int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    return pow(x,n-1)+func(x,n-1);
}
int main()
{
    int n,x,res;
    cin>>x>>n;
    res=func(x,n);
    cout<<res<<endl;
    return 0;
}
*/

#include<iostream>
#include<cmath>
using namespace std;
int func(int x,int i,int n)
{
    if(n==0)
        return 1;
    if(i<n)
        return pow(x,i)+func(x,i+1,n);
    return 0;
}
int main()
{
    int n,x,res;
    cin>>x>>n;
    res=func(x,0,n);
    cout<<res<<endl;
    return 0;
}
