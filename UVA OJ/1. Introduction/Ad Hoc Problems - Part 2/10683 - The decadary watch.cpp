#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long cc,ss,mm,hh;
    while(scanf("%2lld %2lld %2lld %2lld",&hh,&mm,&ss,&cc)!=EOF){
        long long res;
        res=(cc + ss*100 + mm*60*100 + hh*60*60*100) * ((10*100*100*100)*1.0/(24*60*60*100));
        printf("%07lld\n", res);
    }
    return 0;
}
