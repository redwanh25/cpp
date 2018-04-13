/// Time complexity O(n^2)

#include <iostream>
#include <cstring>
using namespace std;

int n;
int prefer[2*100][100];

bool check(int m1, int m, int w)
{
    for(int i = 0; i < n; i++){
        if(prefer[w][i] == m1){
            return true;
        }
        if(prefer[w][i] == m){
            return false;
        }
    }
}

void stable_marriage()
{
    int wpartner[n], mfree[n];
    memset(wpartner, -1, sizeof(wpartner));
    memset(mfree, false, sizeof(mfree));
    int cnt = n;

    while(cnt){
        int m;
        for(m = 0; m < n; m++){
            if(mfree[m] == false){
                break;
            }
        }
        for(int i = 0; i < n && mfree[m] == false; i++){
            int w = prefer[m][i];
            if(wpartner[w-n] == -1){
                wpartner[w-n] = m;
                mfree[m] = true;
                cnt--;
            }
            else{
                int m1 = wpartner[w-n];
                if(check(m1, m, w) == false){
                    wpartner[w-n] = m;
                    mfree[m] = true;
                    mfree[m1] = false;
                }
            }
        }
    }
    cout << "men    women" << endl;
    for(int i = 0; i < n; i++){
        cout << wpartner[i] << "\t" << i+n << endl;
    }
}

int main()
{
    cin >> n;
    // men preference (0 to (n-1))
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> prefer[i][j];
        }
    }
    // women preference (n to 2*n)
    for(int i = n; i < 2*n; i++){
        for(int j = 0; j < n; j++){
            cin >> prefer[i][j];
        }
    }
    stable_marriage();
    return 0;
}

/*

4
7 5 6 4
5 4 6 7
4 5 6 7
4 5 6 7
0 1 2 3
0 1 2 3
0 1 2 3
0 1 2 3

*/
