#include<stdio.h>
#include<math.h>
int main()
{
    double value,res,flo_at,int_ger;
    while(scanf("%lf",&value)!=EOF){
    res=sqrt(value);
    flo_at= modf(res,&int_ger);
    if(flo_at>0.5)
        printf("%d\n",(int)int_ger+1);
    else
        printf("%d\n",(int)int_ger);
    }
    return 0;
}
