#include<cstdio>
#include<iostream>
using namespace std;

int N;
int Num[101];
int K;

int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int solution(int taken, int i, int sum)
{
    if(taken == K || i >= N)
        return sum;
 //   int left = solution(taken+1, i+1, sum+Num[i]);
 //   int right = solution(taken, i+1, sum);
 //   return maximum(left, right);

  return maximum(solution(taken+1, i+1, sum+Num[i]), solution(taken, i+1, sum));
}

int main()
{
 //   freopen("input.txt", "r", stdin);
    while(cin >> N >> K) {
        for(int i = 0; i < N; i++) {
            cin >> Num[i];
        }
        cout << solution(0, 0 ,0) << endl;
    }
    return 0;
}




