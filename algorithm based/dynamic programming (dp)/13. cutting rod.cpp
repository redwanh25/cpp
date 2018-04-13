/// made by nije. tushar ray er video dekho.

#include <iostream>
using namespace std;

int rod_cutting(int a[], int v[], int n, int V)
{
    int k[n+1][V+1];
    for(int i = 0; i <= V; i++){
        k[0][i] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= V; j++){
            if(j == 0){
                k[i][j] = 0;
            }
            else if(a[i-1] <= j){
                k[i][j] = max(k[i-1][j], v[i-1] + k[i][j-a[i-1]]);
            }
            else{
                k[i][j] = k[i-1][j];
            }
        }
    }
    return k[n][V];
}

int main()
{
    int n, V;
    cin >> n;
    int a[n], v[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> V;

    /// kono kisu sorted thakte hobe na...

    cout << rod_cutting(a, v, n, V) << endl;
    return 0;
}

/*

4
1 2 3 4
2 5 7 8
5
0p: 12

4
4 2 3 1
8 5 7 2
5
op: 12

8
1 2 3 4 5 6 7 8
1 5 8 9 10 17 17 20
8
op: 22

8
7 8 4 5 6 1 2 3
17 20 9 10 17 1 5 8
8
op: 22

*/

/*

// A Dynamic Programming solution for Rod cutting problem
#include<stdio.h>
#include<limits.h>

// A utility function to get the maximum of two integers
int max(int a, int b) { return (a > b)? a : b;}

// Returns the best obtainable price for a rod of length n and
// price[] as prices of different pieces

int cutRod(int price[], int n)
{
   int val[n+1];
   val[0] = 0;
   int i, j;

   // Build the table val[] in bottom up manner and return the last entry
   // from the table
   for (i = 1; i<=n; i++)
   {
       int max_val = INT_MIN;
       for (j = 0; j < i; j++)
         max_val = max(max_val, price[j] + val[i-j-1]);
       val[i] = max_val;
   }

   return val[n];
}

// Driver program to test above functions
int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %dn", cutRod(arr, size));
    getchar();
    return 0;
}

*/
