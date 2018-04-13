#include<bits/stdc++.h>
using namespace std;
int fibo[50];
int fib(int n)
{
    cout<< n <<" - " << endl;
    if(fibo[n]!=0)
        return fibo[n];
//    if(n<3)
//        return fibo[n];
    cout<< n <<" + " << endl;
    fibo[n] = fib(n-1) + fib(n-2);
    cout << fibo[n] << " res " << endl;
    cout<< n <<" * " << endl;

    return fibo[n];
}
int main()
{
    int n;
    fibo[1]=1;
    fibo[2]=1;
    while(cin>>n){
    cout<<endl<<fib(n)<<endl;
    for(n=1; n<12; n++)
        cout<<fibo[n]<<" ";
    cout<<endl;
    }
    return 0;
}
