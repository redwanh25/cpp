#include <bits/stdc++.h>

using namespace std;

int n, lim;

int magic(set <int> power_of_x){
    auto it = power_of_x.end();
    it--;
    int highest_number = *it;

    int moves = 0;
    while (highest_number < n){
        moves++;
        highest_number *= 2;
    }
    return moves;
}

bool backtrack(set <int> power_of_x, int moves){
    if (moves + magic(power_of_x) > lim) return false;
    if (power_of_x.count(n) == 1) return true;

    for (auto x: power_of_x){
        for (auto y: power_of_x){
            set <int> new_power_of_x = power_of_x;
            new_power_of_x.insert(x + y);

            if (power_of_x != new_power_of_x && backtrack(new_power_of_x, moves + 1)){
                return true;
            }

            set <int> new_power_of_x2 = power_of_x;
            if (x > y){
                new_power_of_x2.insert(x - y);

                if (power_of_x != new_power_of_x2 && backtrack(new_power_of_x2, moves + 1)){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    //freopen("input.txt", "r", stdin);

    while (scanf("%d", &n) != EOF){
        if (n == 0) break;

        for (lim = 0; ;lim++){
            printf("Current lim = %d\n", lim);
            set <int> power_of_x;
            power_of_x.insert(1);

            if (backtrack(power_of_x, 0)){
                printf("%d\n", lim);
                break;
            }
        }
    }
    return 0;
}
