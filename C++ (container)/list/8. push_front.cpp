// list::push_front
#include <iostream>
#include <list>

int main ()
{
  std::list<int> mylist (2,100);         // two ints with a value of 100
  mylist.push_front (200);
  mylist.push_front (300);

  std::cout << "mylist contains:";
  for (std::list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';
  return 0;
}
