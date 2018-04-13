#include <iostream>
#include <set>
using namespace std;

const int d = 1e5;
const int e = 4 * 1e5 + 5;
char arr[d], seg[e];

void tree_build(int low, int high, int pos)
{
    if(low == high){
        seg[pos] = arr[low];
        return;
    }
    int mid = low + (high - low)/2;
    int l = 2*pos+1;
    int r = 2*pos+2;
    tree_build(low, mid, l);
    tree_build(mid+1, high, r);
    seg[pos] = seg[]
}

int main()
{
    int n;
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        int x;
        cin >> x;
        while(x--){
            char ch;
            int a, b, c;
            cin >> ch;
            if(ch == 'I'){
                cin >> a >> b;

            }
            if(ch == 'Q'){
                cin >> c;

            }
        }
    }
    return 0;
}

