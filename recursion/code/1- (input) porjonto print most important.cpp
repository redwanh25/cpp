/*
        for(int i = 0; i < n; i++){
            cout<<i<<" ";
        }
*/

#include<bits/stdc++.h>
using namespace std;
void FOR(int i, int n) {
    if(i==n) return; // terminates
    cout<<i<<" ";
    FOR(i+1, n);    // return FOR(i+1, n); aita dileo 2 kaj kore.
  //  cout<<i<<" ";
}

int main()
{
    int n,x,i=0;
    cin>>n;
    FOR(i,n);
    return 0;
}
