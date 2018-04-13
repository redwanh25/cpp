#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        if(a>b && a>c){
            if(sqrt(pow(b,2)+pow(c,2))==a)
                printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);
        }
        else if(b>a && b>c){
            if(sqrt(pow(a,2)+pow(c,2))==b)
                printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);
        }
        else if(c>a && c>b){
            if(sqrt(pow(a,2)+pow(b,2))==c)
                printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);
        }
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
