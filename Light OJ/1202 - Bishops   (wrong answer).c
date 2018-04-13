#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long n,i,x,y,r1,c1,r2,c2,j,k,ck1,ck2,ck3,ck4;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        scanf("%lld %lld %lld %lld",&r1,&c1,&r2,&c2);
        ck1=0,ck2=0,ck3=0,ck4=0;
        x=llabs(r1-c1);
        y=llabs(r2-c2);
        if((r1%2==0 && c1%2!=0) && (r2%2==0 && c2%2!=0)){
            if(x==y && (r1<r2 && c1<c2 || r1>r2 && c1>c2))
                printf("Case %lld: 1\n",i);
            else if(r1>r2 && c1<c2){
                for(j=r1; j>=r2; j--)
                    ck1++;
                for(k=c1; k<=c2; k++)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else if(r1<r2 && c1>c2){
                for(j=r1; j<=r2; j++)
                    ck1++;
                for(k=c1; k>=c2; k--)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else
                printf("Case %lld: 2\n",i);
        }
        else if((r1%2==0 && c1%2!=0) && (r2%2!=0 && c2%2==0)){
            if(x==y && (r1<r2 && c1<c2 || r1>r2 && c1>c2))
                printf("Case %lld: 1\n",i);
            else if(r1>r2 && c1<c2){
                for(j=r1; j>=r2; j--)
                    ck1++;
                for(k=c1; k<=c2; k++)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else if(r1<r2 && c1>c2){
                for(j=r1; j<=r2; j++)
                    ck1++;
                for(k=c1; k>=c2; k--)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else
                printf("Case %lld: 2\n",i);
        }
        else if((r1%2!=0 && c1%2==0) && (r2%2==0 && c2%2!=0)){
           if(x==y && (r1<r2 && c1<c2 || r1>r2 && c1>c2))
                printf("Case %lld: 1\n",i);
            else if(r1>r2 && c1<c2){
                for(j=r1; j>=r2; j--)
                    ck1++;
                for(k=c1; k<=c2; k++)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else if(r1<r2 && c1>c2){
                for(j=r1; j<=r2; j++)
                    ck1++;
                for(k=c1; k>=c2; k--)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else
                printf("Case %lld: 2\n",i);
        }
        else if((r1%2!=0 && c1%2==0) && (r2%2!=0 && c2%2==0)){
           if(x==y && (r1<r2 && c1<c2 || r1>r2 && c1>c2))
                printf("Case %lld: 1\n",i);
            else if(r1>r2 && c1<c2){
                for(j=r1; j>=r2; j--)
                    ck1++;
                for(k=c1; k<=c2; k++)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else if(r1<r2 && c1>c2){
                for(j=r1; j<=r2; j++)
                    ck1++;
                for(k=c1; k>=c2; k--)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else
                printf("Case %lld: 2\n",i);
        }
        else if((r1%2==0 && c1%2==0) && (r2%2==0 && c2%2==0)){
            if(x==y && (r1<r2 && c1<c2 || r1>r2 && c1>c2))
                printf("Case %lld: 1\n",i);
            else if(r1>r2 && c1<c2){
                for(j=r1; j>=r2; j--)
                    ck1++;
                for(k=c1; k<=c2; k++)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else if(r1<r2 && c1>c2){
                for(j=r1; j<=r2; j++)
                    ck1++;
                for(k=c1; k>=c2; k--)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else
                printf("Case %lld: 2\n",i);
        }
        else if((r1%2==0 && c1%2==0) && (r2%2!=0 && c2%2!=0)){
            if(x==y && (r1<r2 && c1<c2 || r1>r2 && c1>c2))
                printf("Case %lld: 1\n",i);
            else if(r1>r2 && c1<c2){
                for(j=r1; j>=r2; j--)
                    ck1++;
                for(k=c1; k<=c2; k++)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else if(r1<r2 && c1>c2){
                for(j=r1; j<=r2; j++)
                    ck1++;
                for(k=c1; k>=c2; k--)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else
                printf("Case %lld: 2\n",i);
        }
        else if((r1%2!=0 && c1%2!=0) && (r2%2==0 && c2%2==0)){
            if(x==y && (r1<r2 && c1<c2 || r1>r2 && c1>c2))
                printf("Case %lld: 1\n",i);
            else if(r1>r2 && c1<c2){
                for(j=r1; j>=r2; j--)
                    ck1++;
                for(k=c1; k<=c2; k++)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else if(r1<r2 && c1>c2){
                for(j=r1; j<=r2; j++)
                    ck1++;
                for(k=c1; k>=c2; k--)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else
                printf("Case %lld: 2\n",i);
        }
        else if((r1%2!=0 && c1%2!=0) && (r2%2!=0 && c2%2!=0)){
            if(x==y && (r1<r2 && c1<c2 || r1>r2 && c1>c2))
                printf("Case %lld: 1\n",i);
            else if(r1>r2 && c1<c2){
                for(j=r1; j>=r2; j--)
                    ck1++;
                for(k=c1; k<=c2; k++)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else if(r1<r2 && c1>c2){
                for(j=r1; j<=r2; j++)
                    ck1++;
                for(k=c1; k>=c2; k--)
                    ck2++;
                if(ck1==ck2)
                    printf("Case %lld: 1\n",i);
                else
                    printf("Case %lld: 2\n",i);
            }
            else
                printf("Case %lld: 2\n",i);
        }
        else
            printf("Case %lld: impossible\n",i);
    }
    return 0;
}


//(r1>r2 && c1<c2) || (r1<r2 && c1>c2)
