#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    long long n;
    char c1,c2;
    while(scanf(" %c %c %lld",&c1,&c2,&n)!=EOF){
        if(n%2==0)
            cout<<"undefined"<<endl;
        else if(n%4==1 && ((c1=='>' && c2=='v') || (c1=='^' && c2=='>') || (c1=='<' && c2=='^') || (c1=='v' && c2=='<') ))
            cout<<"cw"<<endl;
        else if(n%4==3 && ((c1=='>' && c2=='^') || (c1=='^' && c2=='<') || (c1=='<' && c2=='v') || (c1=='v' && c2=='>') ))
            cout<<"cw"<<endl;
        else
            cout<<"ccw"<<endl;
    }
    return 0;
}
