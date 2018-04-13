#include<stdio.h>
int i,j,k,n,m,z,l,p,q,temp;

int main()
{
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(l=n-1,i=0; l>=0; l--,i++){
        b[l]=a[i];
    }
    scanf("%d",&m);
    for(j=1; j<=m; j++){
        int vk=1,ck=1;
        scanf("%d",&z);
        for(q=0; q<n; q++){
            if(b[q]<z){
                printf("%d ",b[q]);
                vk=0;
                break;
            }
        }
        if(vk==1)
            printf("X ");
        for(k=0; k<n; k++){
            if(a[k]>z){
                printf("%d\n",a[k]);
                ck=0;
                break;
              }
            }
        if(ck==1)
            printf("X\n");
        }
    return 0;
}
