
/// http://www.geeksforgeeks.org/binary-search-preferred-ternary-search/

#include <iostream>
#include <algorithm>
using namespace std;

int Binary_search(int a[], int low, int high, int key)
{
    if(low <= high){

        int mid = low + (high - low) / 2.0;

        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] > key){
            return Binary_search(a, low, mid-1, key);
        }
        else{
            return Binary_search(a, mid+1, high, key);
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
        int x = Binary_search(a, 0, n-1, key);
        if(x == -1){
            cout << "not found" << endl << endl;
        }
        else{
            cout << "found value : " << a[x] << endl << endl;
        }
    }
    return 0;
}

/// 8 0 4 3 5 1 2 6 9 7
