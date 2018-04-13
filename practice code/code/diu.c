#include<stdio.h>
#include<math.h>
int prime(int j)
{
    if(j==1)
        return 0;
    int i,x;
    x=sqrt(j);
    for(i=2; i<=x; i++){
        if(j%i==0)
            return 0;
    }
    return 1;

}
int main()
{
    int a,b,i,p,temp;
    scanf("%d %d",&a,&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a; i<=b; i++){
        p=prime(i);
        if(p==1)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
