#include<stdio.h>
int func(int x, int y);
int main()
{
    int a,b,h;
    scanf("%d %d",&a,&b);
    h=func(a,b);
    printf("%d\n",h);
    return 0;
}
int func(int x, int y)
{
    int i;
    if(x<y){
        for(i=x; i>0; i--){
           if(y%i==0 && x%i==0){
            return i;
           }
        }
    }
    else{
        for(i=y; i>0; i--){
            if(y%i==0 && x%i==0){
             return i;
            }
        }
    }
}
