#include <iostream>
#include <cstdio>
#include <deque>
using namespace std;

int main()
{
    #ifdef REDWAN
        freopen("input.txt", "r", stdin);
    #endif // REDWAN

    deque <int> r;
    int t, n, q, n1;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        printf("Case %d:\n", i);
        scanf("%d %d", &n, &q);
        for(int j = 1; j <= n; j++){
            scanf("%d", &n1);
            r.push_back(n1);
        }
        char ch;
        int q1;
        for(int j = 1; j <= q; j++){
            scanf(" %c %d", &ch, &q1);
            if(ch == 'c'){
                if(r.size() < q1){
                    printf("none\n");
                }
                else{
                    printf("%d\n", r[q1-1]);
                    r.erase(r.begin() + (q1-1));
                }
            }
            else{
                r.push_back(q1);
            }
        }
        r.clear();
    }
    return 0;
}
