#include<cstdio>
#include<iostream>
using namespace std;

int N;
int A[101];

void print()
{
    int i;
    for(i = 0; i < N; i++)
        cout << A[i];
    cout << endl;
}

void solve(int i)
{
    if(i >= N) {
        print();
        return;
    }
    A[i] = 0;
    solve(i+1);
    A[i] = 1;
    solve(i+1);
}

int main()
{
    while(cin >> N) {
        solve(0);
    }
    return 0;
}

