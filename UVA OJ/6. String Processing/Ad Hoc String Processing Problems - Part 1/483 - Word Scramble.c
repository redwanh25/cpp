#include<stdio.h>
#include<string.h>
int main()
{
    char *a,*b;
    int l,i,j,k;
    a=(char *)malloc(10000*sizeof(char));
    b=(char *)malloc(10000*sizeof(char));
    while(gets(a)){
        for(i=0,k=0; i<=strlen(a); i++){
            l=k;
            if(a[i]==' ' || a[i]=='\0'){
                for(j=i-1; j>=l; j--){
                    b[k]=a[j];
                    printf("%c",b[k++]);
                }
                if(a[i]==' '){
                    b[k]=' ';
                    printf("%c",b[k++]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
