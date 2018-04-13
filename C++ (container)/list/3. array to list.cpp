#include <iostream>
#include <list>

int main ()
{
  int myints[] = {75,23,65,42,13};
  std::list<int> mylist (myints,myints+5);

  std::cout << "mylist contains:";
  for (std::list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';

  return 0;
}
