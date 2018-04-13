#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> foo (3,0);
    vector<int> bar (5,0);

    foo=bar;
    bar=vector<int>();  /// bar k 0 kore dibe.
/// bar.clear();
/// bar.erase(bar.begin(),bar.end());

    cout << "Size of foo: " << foo.size() << '\n';
    cout << "Size of bar: " << bar.size() << '\n';
  return 0;
}
