/// vector to list

#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main ()
{
    list<int> mylist;
    list<int>::iterator it;

    // set some initial values:
    for (int i=1; i<=5; ++i)
        mylist.push_back(i); // 1 2 3 4 5
                            ///   ^
    it = mylist.begin();
    cout<<*it<<endl;
    ++it;       // it points now to number 2
    cout<<*it<<endl;
    mylist.insert (it,10);                        // 1 10 2 3 4 5
    cout<<*it<<endl;                             ///      ^
    // "it" still points to number 2
    mylist.insert (it,2,20);                      // 1 10 20 20 2 3 4 5
    cout<<*it<<endl;                             ///            ^
    --it;                                  // 1 10 20 20 2 3 4 5
    cout<<*it<<endl;                      ///         ^

    vector<int> myvector (2,30);
/// ======
    mylist.insert (it,myvector.begin(),myvector.end());
                                        // 1 10 20 30 30 20 2 3 4 5
                                        ///              ^
    std::cout << "mylist contains:";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}

/// this code output: 1 10 20 30 30 20 2 3 4 5


///=====================================================================================



/// be careful about the code "vector". this it not a list. and "it" point very different
/*
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector <int> mylist;
    vector <int>::iterator it;

    // set some initial values:
    for (int i=1; i<=5; ++i)
        mylist.push_back(i); // 1 2 3 4 5
                            ///   ^
    it = mylist.begin();
    cout<<*it<<endl;
    ++it;       // it points now to number 2
    cout<<*it<<endl;
    mylist.insert (it,10);                        // 1 10 2 3 4 5
    cout<<*it<<endl;                             ///   ^
    // "it" points to number 10
    mylist.insert (it,2,20);                      // 1 20 20 10 2 3 4 5
    cout<<*it<<endl;                             ///    ^
    --it;                                  // 1 20 20 10 2 3 4 5
    cout<<*it<<endl;                     ///  ^
    vector<int> myvector (2,30);
    mylist.insert (it,myvector.begin(),myvector.end());
                                        // 30 30 1 20 20 10 2 3 4 5
                                    ///    ^
    std::cout << "mylist contains:";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
/// this code output: 30 30 1 20 20 10 2 3 4 5
*/
