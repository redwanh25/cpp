#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack < char > s;
    int n, k = 0;
    char ch;
    cin >> n;
    cin >> ch;
    s.push(ch);
    while(--n){
        cin >> ch;
        if(s.top() == ch){
            k++;
        }
        s.push(ch);
    }
    cout << k << endl;
    return 0;
}
