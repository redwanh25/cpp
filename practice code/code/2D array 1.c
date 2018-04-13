#include<stdio.h>
int a,b,i,n,j,k,l,c;
void func()
{
    scanf("%d %d",&a,&b);
    int arr[a][b];
    int arr1[b];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++)
            scanf("%d",&arr[i][j]);
    }
    for(j=0,k=0; j<b; j++,k++){
            arr1[k]=0;
        for(i=0; i<a; i++)
            arr1[k]+=arr[i][j];
    printf("%d ",arr1[k]);
    }

}
void main()
{
    func();
}
