/// you can step 1 2 so, that this code...

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fib[n+1];

    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i <= n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    cout << fib[n] << endl;
    return 0;
}

/*

you can step 1 2 3 so, that this code...

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fib[n+1];

    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 2;
    for(int i = 3; i <= n; i++){
        fib[i] = fib[i-1] + fib[i-2] + fib[i-3];
    }
    cout << fib[n] << endl;
    return 0;
}
*/
