#include<iostream>
#include<vector>
using namespace std;

const int size = 100;
vector <int> a(size);
int c;

void insert(int x)
{
    if(c < size-1){
        a[++c] = x;     /// 1 no index theke start hobe.
        int i = c;
        while(i > 1 && !(a[i] >= a[i/2])){    /// parents = n/2
            swap(a[i], a[i/2]);               /// parents = n/2
            i /= 2;
        }
    }
    else{
        cout << "heap is full" << endl;
    }
}

void print()
{
    for(int i = 1; i <= c; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    insert(25);
    print();
    insert(34);
    print();
    insert(45);
    print();
    insert(15);
    print();
    insert(50);
    print();
    insert(16);
    print();
    insert(14);
    print();
    insert(9);
    print();
    insert(13);
    print();
    insert(36);
    print();
    insert(43);
    print();
    insert(22);
    print();
    insert(10);
    print();
    insert(12);
    print();
    return 0;
}
