#include<iostream>
using namespace std;
int a[10000], n;

void print()
{
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    cout << endl;
}

void binary(int i)
{
    if(i == n){
        print();
        return;
    }
    a[i] = 0;
    binary(i + 1);
    a[i] = 1;
    binary(i + 1);
}

int main()
{
    while(cin >> n)
        binary(0);
    return 0;
}
