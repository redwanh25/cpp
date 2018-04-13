/// r.push_back(); r.size(); r.insert(r.begin()+4, 7); r.begin();
/// r.erase(r.begin(),4); r.empty(); vector <int> r;
/// vector <int> r(4,7); vector <int> r(4); r.clear();
/// vector <int> :: iterator it; reverse(r.begin(), r.end());
/// reverse(r.begin()+2, r.end()-1);  r.insert(r.begin(),5);

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> redwan(4,5); /// vector <int> redwan(4);
    vector <int> :: iterator it;

    redwan.push_back(3);
    redwan.push_back(4);
    redwan.push_back(12);

    for(int i=0; i<redwan.size(); i++)
        cout<<redwan[i]<<" ";
    cout<<endl;

    redwan.insert(redwan.begin(), 4);
    for(int i=0; i<redwan.size(); i++)
        cout<<redwan[i]<<" ";
        cout<<endl;

    redwan.insert(redwan.begin()+3, 9);
    for(int i=0 ; i<redwan.size(); i++)
        cout<<redwan[i]<<" ";
        cout<<endl;

    redwan.erase(redwan.begin()+4);
  //  redwan.erase(redwan.begin(),redwan.end());
    for(it=redwan.begin(); it!=redwan.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

///  advance(it, 3);

///  reverse(redwan.begin(), redwan.end());
    reverse(redwan.begin()+2, redwan.end()-1);
    for(it=redwan.begin(); it!=redwan.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    if(redwan.empty())
        cout<<"kar dim...?"<<endl;
    else
        cout<<"amr"<<endl;

    redwan.clear();

    if(redwan.empty())
        cout<<"kar dim...?"<<endl;
    else
        cout<<"amr"<<endl;

    return 0;
}
