#include<stdio.h>
#include<string.h>
int main()
{
    char s[500001];
    int i,j,k=2,n,ck=0,ck1=0,m=2,l,x,p,q;
    s[0]='1';
    for(j=1; j<500000; j++){
      if(ck==0){
        s[j]='1';
        ck=1;
      }
      else if(ck1==0){
         for(l=1; l<m; l++,j++)
           s[j]='0';
           j--;
           m++;
           ck=0;
      }
    }
    s[j]='\0';
    scanf("%d",&n);
    int a[n];
    for(p=0; p<n; p++)
          scanf("%d",&a[p]);
    printf("%c",s[a[0]-1]);
    for(q=1; q<n; q++)
        printf(" %c",s[a[q]-1]);
    printf("\n");
    return 0;
}
