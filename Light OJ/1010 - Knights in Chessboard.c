#include<stdio.h>
int main()
{
    int n,i,r,a,b,temp;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %d",&a,&b);
        if(a>b){
            temp=b;
            b=a;
            a=temp;
        }
        r=a*b;
        printf("Case %d: ",i);
        if(a==1 && b>=1)
            printf("%d\n",b);
        else if(a==2 && b>=2){
                if(b%4==0)
                    b=b;
                else if(b%2==0)
                    b+=2;
                else
                    b+=1;
                printf("%d\n",b);
        }
        else if(r%2==0){
          r=r/2;
          printf("%d\n",r);
        }
        else if(r%2!=0){
            r=r/2;
            r=r+1;
            printf("%d\n",r);
        }
    }
    return 0;
}
