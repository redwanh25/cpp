/// http://www.lightoj.com/article_show.php?article=1001
/// Idea 6 (modified discarding technique)
/// time complexity O(n*log(log(n)))

#include <iostream>
#include <cmath>
using namespace std;

int a[5001], n;

void sieve()
{
    int x = sqrt(n);

    for(int i = 3; i < x; i += 2){
        if(a[i] == 0){
            for(int j = i*i; j < n; j += i + i){
                a[j] = 1;
            }
        }
    }

    cout << 2;
    for(int i = 3; i < n; i += 2){
        if(a[i] == 0){
            cout << " " << i;
        }
    }
}

int main()
{
    cin >> n;

    sieve();

    return 0;
}
