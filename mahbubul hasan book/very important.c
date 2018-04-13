#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)!=EOF && n){
    for(i=1; i<=n; i++){
        if(i>3)
            break;
        printf("%d ",i);
     }
     printf("\n");
    }
    return 0;
}
