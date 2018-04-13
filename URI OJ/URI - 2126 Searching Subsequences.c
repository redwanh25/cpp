#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[50];
    int i,j,k,ln,ln1,l,n,base,address,pos,m=0;
    while(scanf("%s %s",s,s1)!=EOF){
    int sum=0;
    char s3[20],s4[50];  // *add ;
        ln=strlen(s);
        ln1=strlen(s1);
        for(i=0; i<ln1; i++){
            char s2[50];
            for(j=0+i,k=0; j<ln+i; j++,k++){
                s2[k]=s1[j];
            }
            s2[k]='\0';
            if(strcmp(s,s2)==0)
                sum+=1;
        }
        for(l=0, k=ln; l<ln; l++){
            s3[l]=s[--k];
        }
        s3[l]='\0';
        for(l=0, k=ln1; l<ln1; l++){
            s4[l]=s1[--k];
        }
        s4[l]='\0';
        base=(int)s4;
        address=(int)strstr(s4,s3);
  //      add=strstr(s1,s);
   //     printf("%s\n",add);
        pos=address-base;
        pos=ln1-(pos+ln-1);
        if(sum==0)
            printf("Caso #%d:\nNao existe subsequencia\n\n",++m);
        else
        printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",++m,sum,pos);
    }
    return 0;
}
