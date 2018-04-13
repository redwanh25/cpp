#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[3] = {2, 1, 3};

    sort(a, a+3, greater <int> ());   /// next_permutation a descending vabe thakte hobe.

    cout << "The 3! = 3*2*1 = 6 possible permutations with 3 elements:\n";
    do{
        cout << a[0] << " " << a[1] << " " << a[2] << endl;

    }while(prev_permutation(a, a+3));

    cout << endl << a[0] << " " << a[1] << " " << a[2] << endl;

    return 0;
}
