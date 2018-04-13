#include <iostream>
using namespace std;

int index[10000], segment[(10000 << 2) + 5];

void tree_build(int low, int high, int pos)
{
    if(high == low){
        segment[pos] = index[low];
        return;
    }
    int mid = low + (high - low) / 2;
    tree_build(low, mid, (pos << 1) + 1);
    tree_build(mid+1, high, (pos << 1) + 2);
    segment[pos] = min(segment[(pos << 1) + 1], segment[(pos << 1) + 2]);
}

int query(int q_low, int q_high, int low, int high, int pos)
{
    if(low >= q_low && high <= q_high){
        return segment[pos];
    }
    if(low > q_high || high < q_low){
        return INT_MAX;
    }
    int mid = low + (high - low) / 2;
    int x = query(q_low, q_high, low, mid, (pos << 1) + 1);
    int y = query(q_low, q_high, mid+1, high, (pos << 1) + 2);
    return min(x, y);
}

void tree_update(int low, int high, int pos, int index_pos, int value)
{
    if(low == high){
        segment[pos] = value;
        return;
    }
    int mid = low + (high - low) / 2;
    if(index_pos <= mid){
        tree_update(low, mid, (pos << 1) + 1, index_pos, value);
    }
    else{
        tree_update(mid+1, high, (pos << 1) + 2, index_pos, value);
    }
    segment[pos] = min(segment[(pos << 1) + 1], segment[(pos << 1) + 2]);
}

int main()
{
    int n;
    cin >> n;
    int q_low, q_high, low = 0, high = n-1, pos = 0;

    for(int i = 0; i < n; i++){
        cin >> index[i];
    }

    tree_build(low, high, pos);

    for(int i = 0; i < (n << 2) + 5; i++){
        cout << segment[i] << " ";
    }
    cout << endl;

    int index_pos, value;
    cin >> index_pos >> value;      // update value

    tree_update(low, high, pos, index_pos, value);

    for(int i = 0; i < (n << 2) + 5; i++){
        cout << segment[i] << " ";
    }
    cout << endl;

    while(cin >> q_low >> q_high){
        int MIN = query(q_low, q_high, low, high, pos);
        cout << MIN << endl;
    }

    return 0;
}

