#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector <int> red(5);
    int i=0;
    vector <int> :: reverse_iterator rit = red.rbegin();
    vector <int> :: iterator it;
 //   rit=red.rbegin();
    for( ; rit<red.rend(); rit++){
        *rit=++i;
        cout << *rit << " ";
    }
    cout << endl;
    for(it=red.begin(); it<red.end(); it++)
        cout<<*it<<" ";
    return 0;
}
