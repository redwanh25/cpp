#include<stdio.h>
int main()
{
    int i,a,j=0,b;
    for(i=0; i<10; i++){
        scanf("%d",&a);
        if(a%2!=0)
            b=a;
    }
    printf("%d\n",b);
    return 0;
}
