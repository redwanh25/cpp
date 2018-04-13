#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
    for(int i : a){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
