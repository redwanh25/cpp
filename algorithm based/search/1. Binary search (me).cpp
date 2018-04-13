#include<iostream>
#include<cstdio>
using namespace std;

int binary_search(int p[],int key,int high,int low)
{
    if(low <= high){
        int mid = (high+low)/2.0;
        if(p[mid] == key){
            cout<<"position "<<mid+1<<endl;
            return true;
        }
        else if(p[mid] > key){
            high = mid-1;
            }
        else if(p[mid] < key){
            low = mid+1;
        }
        return binary_search(p,key,high,low);
    }
    return 0;
}

int main()
{
    int i,j,n,key,x,high,low;
    scanf("%d %d",&key,&n);
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    low=0,high=n-1;
    x=binary_search(a,key,high,low);
    if(x==0)
        cout<<"sorry"<<endl;
    return 0;
}
