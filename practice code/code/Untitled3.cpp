#include<stdio.h>
void checker (int sum);
void add(int x, int y){
    printf("%d\n",x+y);
    checker(x+y);
}
void checker (int sum){
    printf((sum%2) & 1 ? "Odd" : "Even");
}
int main(){
    int a,b;
    printf("enter two number:\n");
    scanf("%d %d",&a,&b);
    add(a,b);
}
