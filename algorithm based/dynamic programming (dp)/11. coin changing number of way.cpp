/// tutorial nai. khata dekho.
/// code collection from geeksforgeeks
/// kisu ta 10 no tutorial er moto. coin changing er update (new) video ta.

#include <iostream>
#include <cstring>
using namespace std;

int CCNW(int a[], int n, int v)
{
    int m[v+1];
    memset(m, 0, sizeof(m));
    m[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = a[i]; j <= v; j++){
            m[j] += m[j-a[i]];
        }
    }
    return m[v];
}

int main()
{
    int n, v;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    /// coin shorted thakte hobe na...

    cin >> v;
    cout << CCNW(a, n, v) << endl;
    return 0;
}
