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

    tree_build(low, mid, left_pos);
    tree_build(mid+1, high, right_pos);

    segment[pos] = segment[left_pos] + segment[right_pos];
}

int query(int q_low, int q_high, int low, int high, int pos)
{
    if(q_low <= low && high <= q_high){
        return segment[pos];
    }
    if(q_low > high || q_high < low){
        return 0;
    }

    int mid = low + (high - low) / 2.0;

    int x = query(q_low, q_high, low, mid, 2*pos+1);
    int y = query(q_low, q_high, mid+1, high, 2*pos+2);

    return (x+y);
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

    while(cin >> q_low >> q_high){
        int SUM = query(q_low, q_high, low, high, pos);
        cout << SUM << endl;
    }

    return 0;
}
