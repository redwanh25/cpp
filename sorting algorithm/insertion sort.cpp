#include<iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    for(int i=1; i<n; i++){
        int value = a[i];
        int h = i;
        while(h>0 && a[h-1]>value){
            a[h]=a[h-1];
            h=h-1;
        }
        a[h]=value;
    }
}

int main()
{
    int a[6]={7,2,4,1,5,3};
    insertion_sort(a,6);
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
