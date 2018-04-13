#include <bits/stdc++.h>
using namespace std;
int main()
{
 //   freopen("input.txt", "r", stdin);
    int n;
    while(cin >> n && n){

        int sum = 0, ck = 0, x = 0, ex = 0, ex1 = 0, tmp = 0;
        bool c = true;
        bool c1 = true;

        int r[n][n];
        memset(r, 0, sizeof(r));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> r[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            sum = 0;
            for(int j = 0; j < n; j++){
                sum += r[i][j];
            }
            if(sum % 2 == 1){
                x++;
                if(x == 2){
                    c = false;
                    c1 = false;
                    break;
                }
                if(x == 1){
                    ex = i;
                }
            }
        }
        if(c){
            for(int i = 0; i < n; i++){
                sum = 0;
                for(int j = 0; j < n; j++){
                    sum += r[j][i];
                }
                if(sum % 2 == 1){
                    tmp = x;
                    x++;
                    if(tmp == 0 && x == 1){
                        c1 = false;
                        break;
                    }
                    if(x == 3){
                        c1 = false;
                        break;
                    }
                    if(x == 2){
                        ex1 = i;
                    }
                }
            }
        }
        if(x == 0){
            printf("OK\n");
        }
        else if(c1){
            printf("Change bit (%d,%d)\n", ex+1, ex1+1);
        }
        else{
            printf("Corrupt\n");
        }
    }
    return 0;
}
