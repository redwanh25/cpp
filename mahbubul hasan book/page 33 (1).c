#include<stdio.h>
int i,j,k,n,r,nCr;

int n_fact()
{
    int fact=1;
    for(i=2; i<=n; i++)
        fact*=i;
    return fact;
}

int r_fact()
{
    int fact1=1;
    for(j=2; j<=r; j++)
        fact1*=j;
    return fact1;
}

int nr_fact()
{
    int fact2=1;
    for(k=2; k<=(n-r); k++)
        fact2*=k;
    return fact2;
}

int main()
{
    while(scanf("%d %d",&n,&r)!=EOF){
        nCr=n_fact()/(r_fact()*nr_fact());
        printf("%d\n",nCr);
    }
    return 0;
}
