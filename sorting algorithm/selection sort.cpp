#include<iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    for(int i=0; i<n-1; i++){
        int imin=i;
        for(int j=1+i; j<n; j++){
            if(a[j] < a[imin]){
                imin = j;
            }
        }
        int temp = a[i];
        a[i] = a[imin];
        a[imin] = temp;
    }
}

int main()
{
    int a[6]={7,2,4,1,5,3};
    selection_sort(a,6);
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
