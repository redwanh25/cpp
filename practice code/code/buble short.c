#include<stdio.h>
int main()
{
    int i,j,temp,n;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
///**************************************
    for(i=0; i<n; i++){
        for(j=0+i; j<n; j++){
            if(a[i]>a[j+1]){
                temp=a[i];
                a[i]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
///**************************************
    printf("%d",a[0]);
    for(i=1; i<n; i++)
        printf(" %d",a[i]);
    printf("\n");
    return 0;
}

