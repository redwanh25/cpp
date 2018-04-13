
/// http://www.geeksforgeeks.org/binary-search-preferred-ternary-search/

/*
Best case:
Time Complexity for Binary search = O(log2(n)) (slow)
Time Complexity for Ternary search = O(log3(n)) (fast)

Worst case:
Time Complexity for Binary search = 2clog2n + O(1) (fast)
Time Complexity for Ternary search = 4clog3n + O(1) (slow)

Ternary Search does more comparisons than Binary Search in worst case.

*/

#include <iostream>
#include <algorithm>
using namespace std;

int Ternary_search(int a[], int low, int high, int key)
{
    if(low <= high){

        int mid1 = low + (high - low) / 3.0;
        int mid2 = mid1 + (high - low) / 3.0;

        if(a[mid1] == key){
            return mid1;
        }
        if(a[mid2] == key){
            return mid2;
        }
        if(a[mid1] > key){
            return Ternary_search(a, low, mid1-1, key);
        }
        if(a[mid2] < key){
            return Ternary_search(a, mid2+1, high, key);
        }
        else{
            return Ternary_search(a, mid1+1, mid2-1, key);
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int key;
    while(cin >> key){
        int x = Ternary_search(a, 0, n-1, key);
        if(x == -1){
            cout << "not found" << endl << endl;
        }
        else{
            cout << "found value : " << a[x] << endl << endl;
        }
    }
    return 0;
}

/*

 1. primary
 2. secondary
 3. tertiary / ternary
 4. quaternary
 5. quinary
 6. senary
 7. septenary
 8. octonary
 9. nonary
10. denary
11. -- no term for 11th degree??
12. duodenary

*/
