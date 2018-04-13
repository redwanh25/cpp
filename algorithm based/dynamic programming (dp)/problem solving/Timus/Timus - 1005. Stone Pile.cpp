/// 1005. Stone Pile solution (Timus)

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n;
    int arr[400];

    while(cin >> n) {
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int lim = 1 << n;
        int mini = INT_MAX;

        while(lim) {
            int sum = 0;
            for(int i = 0; i < n; i++) {
                if (lim & (1 << i)){
                    sum += arr [i];
                }
                else{
                    sum -= arr [i];
                }
            }
            if(sum >= 0 && mini > sum){
                mini = sum;
            }
            lim--;
        }
        cout << mini << endl;
    }
    return 0;
}
