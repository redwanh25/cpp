#include<stdio.h>
#include<math.h>
int prime(int j)
{
    if(j==1)
        return 0;
    int i;
    for(i=2; i<=sqrt(j); i++){
        if(j%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int a,b,i,temp;
    while(scanf("%d %d",&a,&b)!=EOF){
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a; i<=b; i++){
        if(prime(i)==1)
            printf("%d ",i);
    }
    printf("\n");
    }
    return 0;
}
