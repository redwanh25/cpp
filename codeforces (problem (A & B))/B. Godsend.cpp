#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n)!=EOF){
        long long d, even=0, odd=0;
        for(int i=0; i<n; i++){
            scanf("%d", &d);
            d & 1 ? ++odd : ++even ;
        }
        printf(odd ? "First\n" : "Second\n");
    }
    return 0;
}
