#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a;
    vector <int> r;
    r.push_back(4);
    r.push_back(5);
    r.push_back(6);
    r.push_back(7);
    r.pop_back();
    r.pop_back();
    cout<<r.back()<<endl;
   /* for(int i=0; i<r[0]; i++)
        cin>>r[i];
    for(int i=0; i<4; i++)
        cout<<r[i]<<" ";
    */
    return 0;
}
