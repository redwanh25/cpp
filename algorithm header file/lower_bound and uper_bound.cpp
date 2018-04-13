/// lower_bound/upper_bound

/*

#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector
using namespace std;
int main()
{
    int n, x, a[102];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    cin >> x;
    int* low = lower_bound(a, a+n, x);
    int* up = upper_bound(a, a+n, x);

    int l = lower_bound(a, a+n, x) - a;

    cout << l << " " << low - a << " " << (up - a - 1) << endl;
    cout << *low << " " << *up << endl;
    return 0;
}

*/


/// lower_bound/upper_bound example

#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector

int main () {
  int myints[] = {10,20,30,30,20,10,10,20};
  std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

  std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

  std::vector<int>::iterator low,up;
  low=std::lower_bound (v.begin(), v.end(), 20); //          ^
  up= std::upper_bound (v.begin(), v.end(), 20); //                   ^
//  int a = std::lower_bound (v.begin(), v.end(), 20) - v.begin();
  std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  std::cout << "lower_bound " << *low << '\n';
//  std::cout << "lower_bound at position " << a << '\n';
  std::cout << "upper_bound at position " << (up - v.begin())-1 << '\n';

  return 0;
}
