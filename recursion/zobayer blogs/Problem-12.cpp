#include<iostream>
#include<algorithm>
using namespace std;
int n,j;
int Sort(int a[],int i)
{
    if(j==n-1)
        return 0;
    if(i<n){
        if(a[j]<a[i]){
            swap(a[j],a[i]);
        }
       return Sort(a,i+1);
    }
    i=++j;
    return Sort(a, ++i); /// return(a, ++j+1);
}
int main()
{
    cin>>n;
    int a[n],j=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Sort(a,1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    for(int i=0; i<n; i++){
        if(a[i]>a[++j])
            break;
    }
    cout<<endl<<a[j]<<endl;
    return 0;
}
