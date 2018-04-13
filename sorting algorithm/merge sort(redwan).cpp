#include<iostream>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int n1 = mid-low+1;
    int n2 = high-mid;
    int L[n1], R[n2];
    for(int i=0; i<n1; i++){
        L[i] = a[low+i];
    }
    for(int j=0; j<n2; j++){
        R[j] = a[mid+1+j];
    }
    int i=0, j=0, k=low;
    while(i<n1 && j<n2){
        if(L[i] >= R[j]){
            a[k++] = R[j++];
        }
        else{
            a[k++] = L[i++];
        }
    }
    while(i<n1){
        a[k++] = L[i++];
    }
    while(j<n2){
        a[k++] = R[j++];
    }
}

void merge_sort(int a[], int low, int high)
{
    if(low<high){
        int mid= (low+high)/2;      /// int mid = low+(high-low)/2; (best)
        merge_sort(a, low, mid);    /// recursion
        merge_sort(a, mid+1, high); /// recursion

        merge(a, low, mid, high);   /// call the function
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    merge_sort(a,0,n-1);    /// call the function
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
