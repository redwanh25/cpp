#include <bits/stdc++.h>

const int n = 4;
const int move_x[] = { 0, +1,   0,  -1};
const int move_y[] = {-1,  0,  +1,   0};

int lim, puzzle[5][5];
int posX[16], posY[16];

int magic(){
    int moves = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (puzzle[i][j] != 0){
                moves += abs(i - posX[puzzle[i][j]]);
                moves += abs(j - posY[puzzle[i][j]]);
            }
        }
    }
    return moves;
}

bool isGoal(){
    int num = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++, num++){
            if (num == n * n){
                num = 0;
            }

            if (puzzle[i][j] != num){
                return false;
            }
        }
    }
    return true;
}

bool backtrack(int row, int col, int moves_so_far, int last_dir){
    if (moves_so_far + magic() > lim){
        return false;
    }

    if (isGoal()){
        return true;
    }

    for (int dir = 0; dir < 4; dir++){
        if ((dir + 2) % 4 == last_dir) continue;

        int next_row = row + move_x[dir];
        int next_col = col + move_y[dir];

        if (next_row >= 0 && next_row < n && next_col >= 0 && next_col < n){
            std::swap(puzzle[row][col],
                 puzzle[next_row][next_col]
                 );

            bool flag = backtrack(next_row, next_col, moves_so_far + 1, dir);

            std::swap(puzzle[row][col],
                 puzzle[next_row][next_col]
                 );

            if (flag) return true;
        }
    }

    return false;
}

int main(){
    int row, col;
    freopen("input.txt", "r", stdin);

    int num = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++, num++){
            if (num == n * n){
                num = 0;
            }

            posX[num] = i, posY[num] = j;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &puzzle[i][j]);
            if (puzzle[i][j] == 0){
                row = i, col = j;
            }
        }
    }

    for (lim = 0; ;lim++){
        printf("Current lim = %d\n", lim);
        if (backtrack(row, col, 0, 4)){
            printf("%d\n", lim);
            break;
        }
    }
    return 0;
}
