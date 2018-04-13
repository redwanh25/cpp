#include<iostream>
using namespace std;

int src(int a[], int low, int high, int key)
{
    if(low>high){
        cout<<"sorry. not found"<<endl;
        return 0;
    }
    else{
        int mid=(high+low)/2.0;
        if(a[mid]<key){
            low=mid+1;
        }
        else if(a[mid]>key)
            high=mid-1;
        else{
            cout<<"found at position: "<<mid+1<<endl;
            return 0;
        }
        return src(a, low, high, key);
    }
}

int main()
{
    int a[13]={1,3,6,9,10,13,17,18,20,33,34,36,45};
    int low=0, high=12, key;
    cin>>key;
    src(a,low,high, key);
    return 0;
}
