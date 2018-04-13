#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int>red(10);
    for(int i=0; i<5; i++)
        cin>>red.at(i);     /// input 1 2 3 4 5
    red.resize(30, 1);
    for(int i=0; i<red.size(); i++)
        cout<<red.at(i)<<" ";
    cout<<endl;
    red.resize(56);
    cout<<red.size()<<endl;
    return 0;
}
