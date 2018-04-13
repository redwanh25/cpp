#include<stdio.h>
void func(int b,int n,int low,int high,int a[n])
{
    int mid=1,i;
    for(i=0; i<n; i++){
    mid=(low+high)/2;
    if(b==a[mid]){
       printf("Done. position %d\n",mid+1);
       break;
        }
    if(b<a[mid])
        high=mid-1;
    if(b>a[mid])
        low=mid+1;
    if(low>high){
        printf("sorry\n");
        break;
        }
    }
}
int main()
{
    int i,n,b,low,high;
    scanf("%d %d",&b,&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    low=0;
    high=n-1;
    func(b,n,low,high,a);
    return 0;
}
