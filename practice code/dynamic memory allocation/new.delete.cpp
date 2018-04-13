#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int *p;

    p=new int;  /// using only c++  // same of p=(int *) malloc(sizeof(int));
    *p=10;
    cout<< *p <<endl;
    delete p;      /// using only c++  // same of free(p)

    p=new int[5];   /// using only c++  // same of p=(int *) malloc(5 * sizeof(int));
    for(int i=0; i<5; i++){
            *(p+i) = i;
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
 //   delete[] p;    /// using only c++   // same of free(p)

//    p=(int *) realloc(p, 10 * sizeof(int));
    p=new int[10];   /// using only c++  // same of p=(int *) malloc(10 * sizeof(int));
    for(int i=5; i<10; i++){
            *(p+i) = i;
        cout<<*(p+i)<<" ";
    }
    cout<<endl;

    /// pore p = new int[10] er jonno ager 0-5 ta data muse gese.

    for(int i=0; i<10; i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    delete[] p;     /// using only c++  // same of free(p)

    return 0;
}
