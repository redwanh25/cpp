#include <iostream>
#include <list>
using namespace std;
int main ()
{
    list<int> mylist;
    int sum (0);

    for(int i=1;i<=10;++i)
        mylist.push_back(i);
///     mylist.push_front(i);

    while(!mylist.empty()){

    sum += mylist.front();
    cout<<mylist.front()<<endl;
    mylist.pop_front();
/*
    sum += mylist.back();
    cout<<mylist.back()<<endl;
    mylist.pop_back();
*/
    }
    cout << "total: " << sum << '\n';
    return 0;
}
