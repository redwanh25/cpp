#include<iostream>
#include<cstdio>
using namespace std;
void bubble_sort(int *p,int n)
{
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(p[i]>p[j]){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}
int main()
{
    int n,r,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    bubble_sort(a,n);
    int s=0;
    r=(n/2.0)+1;
    for(i=0; i<r; i++){
        s+=a[i]/2.0+1;
    }
    cout<<s<<endl;
    return 0;
}
