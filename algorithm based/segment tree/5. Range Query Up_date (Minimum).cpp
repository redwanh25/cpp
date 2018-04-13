#include <iostream>
using namespace std;

int index[100000], segment[400005];

void tree_build(int low, int high, int pos)
{
    if(low == high){
        segment[pos] = index[low];
        return;
    }
    int mid = low + (high - low) / 2.0;

    int left_pos = 2*pos + 1;
    int right_pos = 2*pos + 2;

    tree_build(low, mid, left_pos);      // left node
    tree_build(mid+1, high, right_pos);   // right node

    segment[pos] = min(segment[left_pos], segment[right_pos]);
}

int query(int q_low, int q_high, int low, int high, int pos)
{
    if(low >= q_low && high <= q_high){     // total overlap
        return segment[pos];
    }
    if(q_high < low || q_low > high){   // no overlap
        return INT_MAX;
    }
    int mid = low + (high - low) / 2.0;

    int x = query(q_low, q_high, low, mid, 2*pos+1);
    int y = query(q_low, q_high, mid+1, high, 2*pos+2);
//  return min(query(q_low, q_high, low, mid, 2*pos+1), query(q_low, q_high, mid+1, high, 2*pos+2));

    return min(x, y);
}

void tree_update(int low, int high, int pos, int index_pos, int value)
{
    if(low == high){
        segment[pos] = value;
        return;
    }
    int mid = low + (high - low) / 2.0;

    int left_pos = 2*pos + 1;
    int right_pos = 2*pos + 2;

    if(index_pos <= mid){
        tree_update(low, mid, left_pos, index_pos, value);      // left node
    }
    else{
        tree_update(mid+1, high, right_pos, index_pos, value);   // right node
    }
    segment[pos] = min(segment[left_pos], segment[right_pos]);
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

    for(int i = 0; i < (n*4)+5; i++){
        cout << segment[i] << " ";
    }
    cout << endl;

    int index_pos, value;
    cin >> index_pos >> value;      // update value

    tree_update(low, high, pos, index_pos, value);

    for(int i = 0; i < (n*4)+5; i++){
        cout << segment[i] << " ";
    }
    cout << endl;

    while(cin >> q_low >> q_high){
        int MIN = query(q_low, q_high, low, high, pos);
        cout << MIN << endl;
    }

    return 0;
}
