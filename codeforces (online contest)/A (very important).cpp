
/// http://codeforces.com/contest/890/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("input.txt", "r", stdin);

    int a[6], sum = 0, sum1 = 0;
    for(int i = 0; i < 6; i++){
        cin >> a[i];
        sum += a[i];
    }
    bool ck = false;
    for(int i = 0; i < 6; i++){
        sum1 += a[i];

        for(int j = i+1; j < 6; j++){
            sum1 += a[j];

            for(int k = j+1; k < 6; k++){
                sum1 += a[k];

                if((sum - sum1) == sum1){
                    ck = true;
                    break;
                }

                sum1 -= a[k];
            }

            if(ck){
                break;
            }
            sum1 -= a[j];
        }

        if(ck){
            break;
        }
        sum1 -= a[i];
    }

    if(ck){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
