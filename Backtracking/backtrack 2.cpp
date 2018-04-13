#include <bits/stdc++.h>

int n;
bool found;
char board[25][25];

bool conflict(int row, int col){
    /// check if same column
    for (int i = 0; i < row; i++){
        if (board[i][col] == 'Q'){
            return true;
        }
    }

    /// check if same row
    for (int i = 0; i < col; i++){
        if (board[row][i] == 'Q'){
            return true;
        }
    }

    /// check left diagonal
    int i = row - 1, j = col - 1;
    while (i >= 0 && j >= 0){
        if (board[i][j] == 'Q'){
            return true;
        }
        i--, j--;
    }

    /// check right diagonal
    i = row - 1, j = col + 1;
    while (i >= 0 && j < n){
        if (board[i][j] == 'Q'){
            return true;
        }
        i--, j++;
    }

    return false;
}

void backtrack(int row){
    if (found == true) return;

    if (row == n){
        found = true;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                printf("%c", board[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        return;
    }

    for (int col = 0; col < n; col++){
        if (!conflict(row, col)){
            board[row][col] = 'Q';
            backtrack(row + 1);
            board[row][col] = '.';
        }
    }
}

int main(){
    while (scanf("%d", &n) != EOF){
        found = false;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                board[i][j] = '.';
            }
        }

        backtrack(0);

        if (found == false){
            printf("Impossible\n");
        }
    }
    return 0;
}
