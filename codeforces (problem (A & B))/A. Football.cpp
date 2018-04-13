#include <iostream>
using namespace std;
int main()
{
    string s, s1,temp;
    int n, ck = 1, ck1 = 0;
    cin >> n >> s;
    for(int i = 1; i < n; i++){
        cin >> s1;
        (s == s1) ? ck++ : (temp = s1, ck1++);
    }
    cout << (ck > ck1 ? s : temp) << endl;
    return 0;
}
