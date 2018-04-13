#include<iostream>
#include<cmath>
using namespace std;
int prime(int n,int i)
{
    if(n==1)
        return 0;
     if(i<=sqrt(n)){
        if(n%i==0)
            return 0;
        return prime(n,i+1);
     }
    return 1;

}
int main()
{
    int a;
    while(cin>>a){
        if(prime(a,2)==1)
            cout<<"prime"<<endl;
        else
            cout<<"not prime"<<endl;
    }
    return 0;
}
