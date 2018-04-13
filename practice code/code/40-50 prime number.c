#include<stdio.h>
#include<math.h>
int main()
{
    int x=40,y=50,z,i,j;
    for(i=40; i<=50; i++){
            z=sqrt(i);
        int ck=0;
        for(j=2; j<=z; j++){
            if(i%j==0){
                ck=1;
            break;
            }
        }
        if(ck==0)
            printf("%d ",i);
    }
    return 0;
}
