#include<iostream>
using namespace std;

int a[10000], n;
char b[10000];

void print()
{
    for(int i = 0; i < n; i++){
        if(a[i] == 1)
            cout << b[i] << " ";
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
    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        binary(0);
    }
    return 0;
}

