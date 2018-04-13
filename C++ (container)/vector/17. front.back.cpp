#include <iostream>
#include<iterator>
#include <vector>
using namespace std;
int main ()
{
    vector <int> red(10);  /// vector <int> red(5);
    for(int i=0; i<5; i++)
        cin>>red.at(i);     // 5 4 3 2 1
    vector <int> :: iterator it;
    it=red.begin();
    while(it!=red.end()){
        it++;
        cout<<red.front()++<<" ";   // 5 6 7 8 9 10 11 12 13 14
    //    cout<<red.back()--<<" ";
    }
    cout << endl;
    for(int i=0; i<10; i++)
        cout << red[i] << " ";
    return 0;
}

