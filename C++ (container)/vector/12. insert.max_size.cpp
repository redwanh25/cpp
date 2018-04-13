///r.insert(r.end(), 8, 11); r.max_size()

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> red;
    vector <int> :: iterator it;
    for(int i=1; i<=10; i++)
        red.push_back(i);   //  1 2 3 4 5 6 7 8 9 10
    red.insert(red.end(), 8, 11);     //  1 2 3 4 5 6 7 8 9 10 11 11 11 11 11 11 11 11
    for(it=red.begin(); it!=red.end(); it++)
        cout<<*it<<" ";     //  1 2 3 4 5 6 7 8 9 10 11 11 11 11 11 11 11 11
    cout<<"\n"<<red.max_size()<<endl;
    return 0;
}
