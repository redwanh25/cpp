#include<iostream>
#include<vector>
using namespace std;

const int size = 100;
vector <int> a(size);
int c;
void insert(int x)
{
    if(c < size-1){
        a[++c] = x;
        int i = c;
        while(i > 1 && !(a[i] >= a[i/2])){
            swap(a[i], a[i/2]);
            i /= 2;
        }
    }
}

void remove()
{
    if(c >= 1){
        swap(a[1], a[c]);
        c--;
        int i = 2;
        while(i+1 <= c && !((a[i] >= a[i/2]) && (a[i+1] >= a[i/2]))){ /// there is some problem for input 9 10 12.
            if(a[i] < a[i+1]){
                swap(a[i], a[i/2]);
                i *= 2;
            }
            else{
                swap(a[i+1], a[(i+1)/2]);
                i = (i+1)*2;
            }
        }
    }
    else{
        cout << "heap is empty" << endl;
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
    insert(34);
    insert(45);
    insert(15);
    insert(50);
    insert(16);
    insert(14);
    insert(9);
    insert(13);
    insert(36);
    insert(43);
    insert(22);
    insert(10);
    insert(12);
    print();
    remove();
    print();
    remove();
    print();
    remove();
    print();
    return 0;
}
