///  distance(first_iterator, desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    // Return distance of 4th to maximum element
    cout << "Distance between 4th to max element: ";

    int dis = distance(vect.begin()+3, max_element(vect.begin(), vect.end()));

    cout << dis << endl;
    return 0;
}
