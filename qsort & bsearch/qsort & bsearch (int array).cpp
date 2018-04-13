#include<iostream>
#include<cstdlib>
using namespace std;
int qs(const void *a, const void *b)
{
      return ((*(int *)a) - (*(int *)b));   /// ascending
///   return (*(int *)b - *(int *)a);       /// descending
}

int bs(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int a[7]={3,6,1,9,3,0,2};

    qsort(a, sizeof(a)/sizeof(a[0]), sizeof(int), qs);

    for(int i=0; i<7; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int key = 9, *item;

    item = (int *)bsearch(&key, a, 7, sizeof(int), bs);

    if(item!=NULL)
        cout<<"found : "<<*item<<endl;
    else
        cout<<"not found"<<endl;
    return 0;
}
