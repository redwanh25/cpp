#include<stdio.h>
#include<math.h>
int main()
{
    double v1,v2,v3,a1,a2,s1,s2,t1,t2,s,s_b,t;
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        t1=v1/a1;
        s1=(v1*t1)-.5*(a1*pow(t1,2));
        t2=v2/a2;
        s2=(v2*t2)-.5*(a2*pow(t2,2));
        s=s1+s2;
        if(t1>t2)
            t=t1;
        else
            t=t2;
        s_b=v3*t;
        printf("Case %d: %lf %lf\n",i,s,s_b);
    }
    return 0;
}
