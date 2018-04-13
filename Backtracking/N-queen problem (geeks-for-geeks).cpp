#include <iostream>
using namespace std;

int n;
char board[50][50];

void print()
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool is_safe(int row, int col)
{
    /* Check this row on left side */
    for(int i = 0; i < col; i++){
        if(board[row][i] == 'Q'){
            return false;
        }
    }
    /* Check upper diagonal on left side */
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    /* Check lower diagonal on left side */
    for(int i = row, j = col; i >= 0 && j >= 0; i++, j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}

bool back_track(int col)
{
    /* base case: If all queens are placed then return true */
    if(col >= n){
        return true;
    }

    for(int i = 0; i < n; i++){

        if(is_safe(i, col)){

            board[i][col] = 'Q';

            if(back_track(col + 1)){   //akber true paile ai scop theke r
                return true;  // ber hobe na. aktar por akta true return kore e jabe.
            }       // then last true return korbe main function er kase.

            board[i][col] = '.';    // BACKTRACK
        }
    }

    return false;
}


int main()
{
    while(cin >> n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                board[i][j] = '.';
            }
        }
        if(back_track(0) == false){
            cout << "not satisfy" << endl;
        }
        else{
            print();
        }
    }
    return 0;
}
