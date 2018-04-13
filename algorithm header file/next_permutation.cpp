#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[3] = {2, 1, 3};

    sort(a, a+3);   /// next_permutation a sorted vabe thakte hobe.

    cout << "The 3! = 3*2*1 = 6 possible permutations with 3 elements:\n";
    do{
        cout << a[0] << " " << a[1] << " " << a[2] << endl;

    }while(next_permutation(a, a+3));

    cout << endl << a[0] << " " << a[1] << " " << a[2] << endl;

    return 0;
}
