///  advance (it2,6);

#include <iostream>
#include <list>
using namespace std;
int main ()
{
  std::list<int> mylist;
  std::list<int>::iterator it1,it2;

  // set some values:
  for (int i=1; i<10; ++i) mylist.push_back(i*10);

                              // 10 20 30 40 50 60 70 80 90
  it1 = it2 = mylist.begin(); // ^^
  advance (it2,6);            // ^                 ^
  ++it1;                      //    ^              ^

  it1 = mylist.erase (it1);   // 10 30 40 50 60 70 80 90
                              //    ^           ^

  it2 = mylist.erase (it2);   // 10 30 40 50 60 80 90
                              //    ^           ^

  ++it1;                      //       ^        ^
  --it2;                      //       ^     ^

  mylist.erase (it1,it2);     // 10 30 60 80 90
                              //        ^

  cout<<*it1<<" "<<*it2<<endl;

  ///  mylist.erase(it2); dile 60 delete hobe. but, mylist.erase(it1); dile
  /// kisu delete hobe na. cause it1 haray gese.

    cout << *(++it1) << endl;   /// 977485133 gurbes value.

  std::cout << "mylist contains:";
  for (it1=mylist.begin(); it1!=mylist.end(); ++it1)
    std::cout << ' ' << *it1;
  std::cout << '\n';

  return 0;
}
