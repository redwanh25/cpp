/// red.at(2)=6; it looks like a arr[2]=6. 100% same.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int k;
    vector <int> red(5);  ///red(5) declear korte hobe. like arr[5].
    vector <int> :: iterator it;
    for(unsigned i=0; i!=red.size(); i++){
        cin>>k;
        red.at(i)=k;  /// red.at(2)=5; cout<<red.at(2)<<endl;
///     cin>>red.at(i);
    }
    for(unsigned i=0; i!=red.size(); i++)
          cout<<red.at(i)<<" ";
 //   for(it=red.begin()+2; it!=red.end(); it++)
 //       cout<<*it<<" ";
    return 0;
}
