#include<iostream>
#include<vector>
using namespace std;
int main()
{
    char i;
    string j;
    int k;
    vector<pair<char,pair<string,int> > > red;
    cin>>i>>j>>k;
    red.push_back(make_pair(i,make_pair(j,k)));

/// red.push_back(make_pair('A',make_pair("redwan",4)));

    cout<<red[0].first<<" "<<red[0].second.second<<" "<<red[0].second.first<<endl;
    vector<pair<char,pair<string,int> > > :: iterator it;
    it=red.begin();
    cout<<it->first<<" "<<it->second.second<<" "<<it->second.first<<endl;
    return 0;
}
