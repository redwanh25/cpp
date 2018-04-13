#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int *p;

    p=(int *) malloc(sizeof(int));     /// using c or c++
    *p=10;
    cout<< *p <<endl;
    free(p);

    p=(int *) malloc(5 * sizeof(int));    /// using c or c++
    for(int i=0; i<5; i++){
            *(p+i) = i;     // p[i] = i;
        cout<<*(p+i)<<" ";
    }
    cout<<endl;

    int *a = (int *) realloc(p, 10 * sizeof(int));     /// using c or c++
    for(int i=5; i<10; i++){
            *(a+i) = i;     // a[i] = i;
        cout<<*(a+i)<<" ";
    }
    cout<<endl;

    for(int i=0; i<10; i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
    free(a);        /// using c or c++

    return 0;
}
