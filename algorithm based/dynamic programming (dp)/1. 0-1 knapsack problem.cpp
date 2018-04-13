#include <iostream>
using namespace std;

int knapsack(int val[], int wt[], int v, int W)
{
    int k[v+1][W+1];
    for(int i = 0; i <= v; i++){
        for(int w = 0; w <= W; w++){
            if(i == 0 || w == 0){
                k[i][w] = 0;
            }
            else if(wt[i-1] <= w){
                k[i][w] = max(val[i-1] + k[i-1][w-wt[i-1]], k[i-1][w]);
            }
            else{
                k[i][w] = k[i-1][w];
            }
        }
    }
    return k[v][W];
}

int main()
{
    int v, w, W;
    cin >> v >> w >> W;
    int val[v], wt[w];
    for(int i = 0; i < v; i++){
        cin >> val[i];
    }
    for(int i = 0; i < w; i++){
        cin >> wt[i];
    }

    /// no need to sort...

    cout << knapsack(val, wt, v, W) << endl;

    return 0;
}

/*

3 3 50
60 100 120
10 20 30

3 3 50
120 100 60
30 20 10

4 4 7
5 7 4 1
4 5 3 1
9


*/
