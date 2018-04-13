#include <iostream>
using namespace std;

int index[100000], segment[400005];

void tree_build(int low, int high, int pos)
{
    if(low == high){
        if(index[low] % 2 == 0){
            segment[pos] = index[low];      /// array te 1st update ta
        }                                   /// aikhan theke e hoy.

     //   else segment[pos] = 0;      /// ai line ta na likhleo hobe.
     //                           /// cs, array global a declear kora ase. automatic 0 hoye jabe.

        return;
    }

    int mid = low + (high - low) / 2.0;

    int left_pos = 2*pos + 1;
    int right_pos = 2*pos + 2;

    tree_build(low, mid, left_pos);
    tree_build(mid+1, high, right_pos);

    segment[pos] = segment[left_pos] + segment[right_pos];
    /// 2nd update ta hoy ai khan theke. mane jei ta array te thake
    /// tader moddhe plus kore array er arek ta index a value boshay dey.
    /// so, amader change korte hole oi if condition er moddhe change
    /// korte hobe. ai khane korle hobe na.
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

/*
minimum query er pic...

index[4] : -1 2 4 0
                      -1
                    /    \
  2nd update -->  -1      0  <-- 2nd update
                 /  \    /  \
               -1    2  4    0
                ^    ^  ^    ^
                | 1st update |

segment[7] :  -1 -1 0 -1 2 4 0
                  ^    ^ ^
                 2nd   1st update

ai khane array te 3 & 4 no index a age dhukse -1 & 2. then ai dui ter
moddhe jei ta soto (-1) shei ta dhukse array er 1 no index a.

Segment Tree Range Minimum Query (Tushar Roy) = 17:40 minute
*/
