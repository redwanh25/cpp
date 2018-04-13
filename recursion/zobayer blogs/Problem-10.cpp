/// bangla method
#include<iostream>
#include<cstdio>
using namespace std;
int lcm(int a, int b, int m)
{
    if(a*m % b ==0)
        return a*m;
    return lcm(a, b, m+1);
}
int main()
{
    int a, b, l;
    scanf("%d %d", &a, &b);
    l = lcm(a, b, 1);
    printf("%d\n", l);
    return 0;
}

/// my code
/*
#include<iostream>
#include<cstdio>
using namespace std;
int sum=1;
int lcd(int i, int a, int b)
{
    if(i<=a || i<=b){
        if(a%i==0 && b%i==0){
            sum*=i;
            return lcd(i, a/i, b/i);
        }
        else
            return lcd(i+1, a, b);
    }
    else
        return (sum*a*b);
}
int main()
{
    int a,b,res;
    while(scanf("%d %d",&a,&b)!=EOF){
    res = lcd(2,a,b);
    cout<<res<<endl;
    sum=1;
    }
    return 0;
}
*/
