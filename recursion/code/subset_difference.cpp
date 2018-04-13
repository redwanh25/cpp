#include<cstdio>
#include<iostream>
using namespace std;

int N;
int A[101];
int Num[101];
int Total;

int absolute(int n)
{
    if(n < 0)
        return -n;
    return n;
}

void print()
{
    int i, d, p2, p1 = 0;
    for(i = 0; i < N; i++)
        if(A[i] == 1)
            p1 += Num[i];
    p2 = Total - p1;
    d = absolute(p1-p2);
    cout << d << endl;
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
        Total = 0;
        for(i = 0; i < N; i++) {
            cin >> Num[i];
            Total += Num[i];
        }
        solve(0);
    }
    return 0;
}


