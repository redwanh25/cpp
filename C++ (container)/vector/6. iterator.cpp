/// vector <int> :: iterator it;
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector <int> r;
    vector <int> :: iterator it;
    for(int i=1; i<=5; i++)
        r.push_back(i);
    it=r.begin();
    it++;
    cout<< *it <<endl;
    return 0;
}
