#include <iostream>
#include <list>

// a predicate implemented as a function:

/// bool single_digit (int value)          // aita use korleo hoy.
bool single_digit (const int& value)      /// & na dileo to hoy.. :(
{
    return (value<10);
}

// a predicate implemented as a function:
/// bool is_odd (int value)               // aita use korleo hoy.
bool is_odd (const int& value)           /// & na dileo to hoy.. :(
{
  //  return (value % 2) == 1;
    return (value & 1) != 0;
}

int main ()
{
  int myints[]= {15,36,7,17,20,39,4,1};
  std::list<int> mylist (myints,myints+8);   // 15 36 7 17 20 39 4 1

  mylist.remove_if (single_digit);           // 15 36 17 20 39

  mylist.remove_if (is_odd);               // 36 20

  std::cout << "mylist contains:";
  for (std::list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
