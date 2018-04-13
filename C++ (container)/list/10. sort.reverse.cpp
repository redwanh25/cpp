#include <iostream>
#include <list>
using namespace std;
int main ()
{
    list<string> mylist;
    list<string>::iterator it;
    mylist.push_back ("one");
    mylist.push_back ("two");
    mylist.push_back ("Three");

    mylist.sort();

    cout << "sort:";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    mylist.reverse();

    cout << "reverse:";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
    return 0;
}
