#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double r1,r2,r3,a,b,c,area,A,B,C,ar1,ar2,ar3,f_a,s;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        A=acos((b*b+c*c-a*a)/(2*b*c))*(180/(acos(-1)));
        B=acos((c*c+a*a-b*b)/(2*c*a))*(180/(acos(-1)));
        C=acos((b*b+a*a-c*c)/(2*b*a))*(180/(acos(-1)));
        ar1=(A/360)*acos(-1)*(r3*r3);
        ar2=(B/360)*acos(-1)*(r1*r1);
        ar3=(C/360)*acos(-1)*(r2*r2);
        f_a=area-ar1-ar2-ar3;
        printf("Case %d: %.8lf\n",i,f_a);
    }
    return 0;
}
