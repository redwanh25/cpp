#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
bool func(int a, int b)
{
    return (a>b);   /// descending
/// return (a<b)   /// ascending
}
int main()
{
    vector <int> red;
    vector <int> :: iterator it;
    red.push_back(5);
    red.push_back(1);
    red.push_back(3);
    red.push_back(2);
    red.push_back(4);
    red.push_back(8);
  //  sort(red.begin(),red.end()-3, func);
   sort(red.begin(), red.begin()+3, func);
  /// sort(red.begin(), red.end());
 //  sort(red.begin(), red.begin() +3);
  /// sort(red.begin(), red.end()-3);
  /// sort(red.begin(), red.end(), func);
 //   for(int i=0; i<red.size(); i++)
 //       cout<<red[i]<<" ";
    for(it=red.begin(); it!=red.end(); it++)
        cout<<*it<<" ";
    return 0;
}

