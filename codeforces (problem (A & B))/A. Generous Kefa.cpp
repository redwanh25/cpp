#include <bits/stdc++.h>
using namespace std;

int cnt[300];

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, k;
    while(cin>>n>>k){
        string s;
        cin>>s;
        bool ck=true;
        for(int i=0; i<s.size(); i++){
            cnt[s[i]]++;
            if(cnt[s[i]]>k){
                ck=false;
                break;
            }
        }
        printf(ck ? "YES\n" : "NO\n");
    }
    return 0;
}
/// do the harlem shake
/// use the force luke
/// doge meme
