#include<stdio.h>
void kafi(int x, int y)
{
    if(x<y){
        printf("%d ",x);
        kafi(x+1, y);
    }
}
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    kafi(x+1, y);
    return 0;
}
