// vector comparisons
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int> foo;   // three ints with a value of 100
  vector<int> bar;   // two ints with a value of 200
    foo.push_back(0);
    foo.push_back(2);
    bar.push_back(0);
    bar.push_back(1);
    bar.push_back(3);
    if(foo==bar)
        cout<<"foo and bar are equal\n";
    if(foo!=bar)
        cout<<"foo and bar are not equal\n";
    if(foo< bar)
        cout<<"foo is less than bar\n";
    if(foo> bar)
        cout<<"foo is greater than bar\n";
    if(foo<=bar)
        cout<<"foo is less than or equal to bar\n";
    if(foo>=bar)
        cout<<"foo is greater than or equal to bar\n";

  return 0;
}
