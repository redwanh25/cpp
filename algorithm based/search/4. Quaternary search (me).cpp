#include <iostream>
#include <algorithm>
using namespace std;

int Quaternary_search(int a[], int low, int high, int key)
{
    if(low <= high){

        int mid1 = low + (high - low) / 4;
        int mid2 = mid1 + (high - low) / 4;
        int mid3 = mid2 + (high - low) / 4;

        if(a[mid1] == key){
            return mid1;
        }
        if(a[mid2] == key){
            return mid2;
        }
        if(a[mid3] == key){
            return mid3;
        }
        if(a[mid1] > key){
            return Quaternary_search(a, low, mid1-1, key);
        }
        if(a[mid1] < key && key < a[mid2]){
            return Quaternary_search(a, mid1+1, mid2-1, key);
        }
        if(a[mid2] < key && key < a[mid3]){
            return Quaternary_search(a, mid2+1, mid3-1, key);
        }
        if(a[mid3] < key){
            return Quaternary_search(a, mid3+1, high, key);
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
        int x = Quaternary_search(a, 0, n-1, key);
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

