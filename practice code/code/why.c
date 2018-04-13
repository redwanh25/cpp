#include<stdio.h>
int main()
{
    double i,j;
    for(i=0.0; i<=5.0; i+=0.2){
        printf("%lf ",i);
        int x=i;
        printf("%d ",x);
    }
    printf("\n\n");
     for(i=0.0; i<=5.0; i+=0.2){
        int x=i;
        if(x==i)
            printf("%d ",x);
    }
    printf("\n");
    return 0;
}
