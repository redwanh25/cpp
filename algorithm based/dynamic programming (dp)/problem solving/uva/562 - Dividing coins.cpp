#include <iostream>
using namespace std;

int knapSack(int wt[], int v, int W){

    int k[v+1][W+1];
    for(int i = 0; i <= v; i++){
        for(int w = 0; w <= W; w++){
            if(i == 0 || w == 0){
                k[i][w] = 0;
            }
            else if(wt[i-1] <= w){
                k[i][w] = max(wt[i-1] + k[i-1][w - wt[i-1]], k[i-1][w]);
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

    int test, sum, v;
    cin >> test;
    while(test--){
        cin >> v;
        sum = 0;
        int wt[v];
        for(int i = 0; i < v; i++){
            cin >> wt[i];
            sum += wt[i];
        }
        cout << sum - 2*knapSack(wt, v, sum/2) << endl;
    }
    return 0;
}

