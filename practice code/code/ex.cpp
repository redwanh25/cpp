#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
