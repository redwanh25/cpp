#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={43,23,14,55,11};
    vector <int> red;
    vector <int> :: iterator it;
    for(int i=0; i<5; i++)
        red.push_back(a[i]);
      sort(red.begin()+1, red.end()-1);
 ///   sort(red.begin(),red.begin()+3);
    for(it=red.begin(); it != red.end(); it++)
        cout<<*it<<" ";
    return 0;
}
