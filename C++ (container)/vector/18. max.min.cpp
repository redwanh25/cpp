#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    vector<int> a(10,10);
    int x;
    for(int i=0; i<5; i++){
        cin>>a.at(i);
    }
    x=a[0];
    for(int i=1; i<5; i++){
        x=min(x,a.at(i));
    /// x=max(x,a[i]);
    }
    cout<<x<<" "<<a.at(7)<<endl;
    return 0;
}
