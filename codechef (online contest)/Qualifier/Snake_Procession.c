#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,a,c,c1,n,ln,r;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&ln);
        c=0;
        c1=0;
        char x[ln+1];
        char y[ln+1];
        scanf("%s",x);
        for(j=0,a=0; j<ln; j++){
            if(x[j]=='H' || x[j]=='T'){
                y[a]=x[j];
                a++;
            }
            y[a]='\0';
        }
        if(y[0]=='\0')
            printf("Valid\n");
        else{
        char y1[a+1];
        for(l=0; l<a; l++){
            y1[l]='H';
            l++;
            y1[l]='T';
        }
        y1[l]='\0';
        r=strcmp(y1,y);
        if(r==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
      }
    }
    return 0;
}
