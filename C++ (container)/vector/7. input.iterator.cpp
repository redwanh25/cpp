/// r.end()

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int k;
    vector<int>r;
    vector<int>::iterator it;
    for(int i=1; i<5; i++){
        cin>>k;
        r.push_back(k);
    }
    for(int i=0; i<r.size(); i++)
        cout<<r[i]<<" ";
    cout<<endl;
    for(it=r.begin(); it!=r.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
