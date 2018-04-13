#include<iostream>
#include<algorithm>
using namespace std;
int n,c;
void binary_search(int a[])
{
    int i,high,low,mid,key;
    for(int k=0; k<n-1; k++){
        key=a[k];
        high=n-1;
        low=k+1;
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]==key){
            ++c;
            break;
        }
        else if(key<a[mid])
            high=mid-1;
        else if(a[mid]<key)
            low=mid+1;
        }
    }
}
int main()
{
    int i,j;
    int a[5005];
    while(cin>>n){
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    binary_search(a);
    cout<<c<<endl;
    c=0;
    }
    return 0;
}
