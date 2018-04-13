#include<stdio.h>
int main()
{
    int i,j,k,a[4],temp;
    for(i=0; i<4; i++)
        scanf("%d",&a[i]);
    for(j=0; j<4; j++){
        for(k=j+1; k<4; k++){
            if(a[j]>a[k]){
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    for(j=0; j<4; j++)
        printf("%d ",a[j]);
    printf("\n");
    return 0;
}
