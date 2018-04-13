/// r.back(); r.pop_back();

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int sum=0;
    vector <int> r;
    r.push_back(4);
    r.push_back(5);
    r.push_back(3);
    while(!r.empty()){
        cout<<r.back()<<endl;
    //  sum+=r.back();
        r.pop_back();
    }
    cout<<r.size()<<endl;
 //   cin.sync();
 //   cin.get();
    return 0;
}
