#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b)
{
    if(a.first==b.first)
        return a.second>b.second;
    else
        return a.first<b.first;

}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    vector< pair<int,int> > red(1000);
    for(int i=0; i<1000; i++){
    int ck=0;
    for(int j=1; j<i+1; j++){
        if((i+1)%j==0){
            ++ck ;
        }
    }
    red[i].first=ck;
    red[i].second=i+1;
    }
    sort(red.begin(),red.begin()+1000,comp);
    int n,m,s=0;
    cin>>n;
    while(n--){
        cin>>m;
        cout<<"Case "<<++s<<": "<<red[m-1].second<<endl;
    }
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
bool comp(type a, type b)
{
    if(a.x==b.x)
        return a.y>b.y;
    else
        return a.x<b.x;

}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    type red[1000];
    for(int i=0; i<1000; i++){
    int ck=0;
    for(int j=1; j<i+1; j++){
        if((i+1)%j==0){
            ++ck;
        }
    }
    red[i].x=ck;
    red[i].y=i+1;
    }
    sort(red,red+1000,comp);
    int n,m,s=0;
    cin>>n;
    while(n--){
        cin>>m;
        cout<<"Case "<<++s<<": "<<red[m-1].y<<endl;
    }
    return 0;
}
*/
