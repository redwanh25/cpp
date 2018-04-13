#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int code_h1, code_m1, my_h2, my_m2;
    while(1){
    printf("Contest will start (hh:mm) = ");
    scanf("%d:%d",&code_h1,&code_m1);
    printf("      My time      (hh:mm) = ");
    scanf("%d:%d",&my_h2,&my_m2);

    int m,m1,res,re,hour,x=0,y=0;

    m = code_h1*60 + code_m1;
    m1 = my_h2*60 + my_m2;
    res=((m+m1)/60)/12;
    hour=((m+m1)/60)%12;


    printf("\n    bd contest time        = %02d:-- tay\n\n",hour);
    }
    return 0;
}
