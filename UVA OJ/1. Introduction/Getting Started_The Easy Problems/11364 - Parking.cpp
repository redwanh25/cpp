#include<iostream>
#include<vector>
#include<algorithm>
typedef int redwan;
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    redwan n,m,i,j;        /// look at the line.
    cin>>n;
    while(n--){
        cin>>m;
        vector <int> red(m);
        vector <int> :: iterator it_min, it_max;
        for(i=0; i<m; i++)
            cin>>red.at(i);
        sort(red.begin(),red.end());
        it_min = red.begin();
        it_max = red.end()-1;
        int res = (*it_max - *it_min)*2;
        cout<<res<<endl;
    }
    return 0;
}
