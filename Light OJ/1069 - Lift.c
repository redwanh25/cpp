#include<stdio.h>
int main()
{
    int x,y,z,i,res;
    scanf("%d",&z);
    for(i=1; i<=z; i++){
        scanf("%d %d",&x,&y);
        if(x<=y)
            res=(y-x)*4+(x-0)*4+19;
        else
            res=(x-y)*4+(x-0)*4+19;
        printf("Case %d: %d\n",i,res);
    }
        return 0;
}

