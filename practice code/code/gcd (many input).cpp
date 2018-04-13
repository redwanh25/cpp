#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int min,int i,int *p)
{
    int j,c=0;
    for(j=0; j<i-1; j++){
        if(p[j]%min==0)
            c++;
    }
    if(i==c+1)
        return min;
     return gcd(min-1,i,p);
}
int main()
{
    int a[65530],i=0,j,min,g;
    while(scanf("%d",&a[i])!=EOF){
        if(i==0)
            min=a[i];
        if(min>a[i])
            min=a[i];
        i++;
    }
    g=gcd(min,i,a);
    cout<<g<<endl;
    return 0;
}

