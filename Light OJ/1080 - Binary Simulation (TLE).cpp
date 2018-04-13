#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>

#define sf(a)     scanf("%d", &a)
#define sfc(a)    scanf(" %c", &a)
#define sf1(a, b) scanf("%d %d", &a, &b)
#define For(a, b) for(int i = a; i <= b; i++)

using namespace std;

int main()
{
    #ifndef REDWAN
        freopen("input.txt", "r", stdin);
    #endif // REDWAN

    int n, x;
    char ch;
    string s;
    sf(n);
    For(1, n){
        printf("Case %d:\n", i);
        cin >> s;
        sf(x);
        int a, b, c;
        For(1, x){
            sfc(ch);
            ch == 'I' ? sf1(a, b) : sf(c);
            if(ch == 'I'){
                For(a-1, b-1){
                    if(s[i] == '0')
                        s.replace(i, 1, "1");
                    else
                        s.replace(i, 1, "0");
                }
            }
            else{
                printf("%c\n", s[c-1]);
            }
        }
    }
    return 0;
}
