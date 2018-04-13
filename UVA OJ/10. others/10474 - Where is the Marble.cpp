#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int n, q, x = 0;
    while(cin >> n >> q && (n || q)){
        int a[n];
        int b[q];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < q; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        cout << "CASE# " << ++x << ":" << endl;
        for(int j = 0; j < q; j++){
            bool c = true;
            for(int i = 0; i < n; i++){
                if(b[j] == a[i]){
                    cout << b[j] << " found at " << i+1 << endl;
                    c = false;
                    break;
                }
            }
            if(c){
                cout << b[j] << " not found" << endl;
            }
        }
    }
    return 0;
}
