#include<stdio.h>
int main()
{
    int i,n,c1,c2,sum;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        {
        scanf("%d",&sum);
            c1=sum/2;
            c2=sum-c1;
            printf("%d %d\n",c1,c2);
        }
    return 0;
}
