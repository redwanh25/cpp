#include<iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0+i; j<n; j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    int a[6]={7,2,4,1,5,3};
    bubble_sort(a,6);
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
