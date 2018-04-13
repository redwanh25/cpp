#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,x,y;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d", &x, &y);
        vector < pair<int, int> > red;
        int max=0;
        for(int i=x; i<=y; i++){
            int d=sqrt(i);
            int ck=0;
            for(int j=1; j<=d; j++){
                if(i%j==0){
                    ++ck;
                }
            }
            if(d*d == i)
                ck = ck*2-1;
            else
                ck*=2;
            red.push_back(make_pair(ck,i));
        }
        sort(red.begin(), red.end());
        reverse(red.begin(),red.end());

        vector < pair <int, int> >:: iterator it;

        for(it=red.begin() ; it!=red.end(); it++){
            if(it->first != (it+1)->first)
                break;
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",x,y, it->second, it->first);
    }
    return 0;
}
