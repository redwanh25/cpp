#include<cstdio>
#include<iostream>
using namespace std;

int N;
int A[101];
int Num[101];

void print()
{
    int i;
    for(i = 0; i < N; i++)
        if(A[i] == 1)
            cout << Num[i] << " ";
    cout << endl;
}

void solve(int i)
{
    if(i == N) {
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
    int i;
    while(cin >> N) {
        for(i = 0; i < N; i++)
            cin >> Num[i];
        solve(0);
    }
    return 0;
}

