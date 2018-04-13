#include<stdio.h>
int main()
{
    int a[65530],i=0,j,n,sum=0;
    double avg;
    while(scanf("%d",&a[i])!=EOF && a[i]){
        sum+=a[i++];
    }
    printf("input number: ");
    for(j=0; j<i; j++)
        printf("%d ",a[j]);
    printf("\n");
    printf("%d",sum);
    avg=(double)sum/i;
    printf("Avg= %.2lf\n",avg);
    return 0;
}
