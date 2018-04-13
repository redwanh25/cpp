#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,r;
    scanf("%d",&n);
    getchar();
    char s1[n][100];
    char tmp[n][100];
    for(i=0; i<n; i++)
        gets(s1[i]);
    for(i=0; i<n; i++){
        for(j=1+i; j<n; j++){
        r=strcmp(s1[i],s1[j]);
        if(r>0){
            strcpy(tmp[i],s1[i]);
            strcpy(s1[i],s1[j]);
            strcpy(s1[j],tmp[i]);
        }
      }
    }
    printf("\n\n");
    for(i=0; i<n; i++)
        printf("%s\n",s1[i]);
    return 0;
}
