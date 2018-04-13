#include <bits/stdc++.h>

bool taken[50];
int n, circle[50];

bool already_in(int pos, int num){
    for (int i = 1; i < pos; i++){
        if (circle[i] == num){
            return true;
        }
    }
    return false;
}

bool isprime(int x){
    if (x < 2) return false;
    for (int i = 2; i < x; i++){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}

void backtrack(int pos){
    if (pos > n){
        if (isprime(circle[1] + circle[n])){
            for (int i = 1; i <= n; i++){
                printf("%d ", circle[i]);
            }
            puts("");
        }

        return;
    }

    for (int num = 1; num <= n; num++){
        if (!taken[num]){
            if (isprime(circle[pos - 1] + num)){
                circle[pos] = num;

                taken[num] = true;
                backtrack(pos + 1);
                taken[num] = false;
            }
        }
    }
}

int main(){
    scanf("%d", &n);

    taken[1] = true;
    circle[1] = 1;
    backtrack(2);
    return 0;
}
