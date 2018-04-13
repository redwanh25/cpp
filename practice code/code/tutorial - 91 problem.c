#include<stdio.h>
#include<string.h>
char Name(int n, char name[n][100]);
char Id(int n,char id[n][100]);
char Sgpa(int n,char sgpa[n][100]);
int i,j,k,n,digit,r,r1,r2;

char Name(int n, char name[n][100])
{
    char tmp[n][100];
    for(i=0; i<n; i++){
            for(j=1+i; j<n; j++){
        r=strcmp(name[i],name[j]);
        if(r>0){
            strcpy(tmp[i],name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],tmp[i]);
        }
      }
    }

    return name[n];
}

char Id(int n,char id[n][100])
{
    char tmp1[n][100];
   for(i=0; i<n; i++){
      for(j=1+i; j<n; j++){
      r1= strcmp(id[i],id[j]);
      if(r1>0){
         strcpy(tmp1[i],id[i]);
         strcpy(id[i],id[j]);
         strcpy(id[j],tmp1[i]);
      }
    }
   }
    return id[n];
}

char Sgpa(int n,char sgpa[n][100])
{
    char tmp2[n][100];
   for(i=0; i<n; i++){
      for(j=1+i; j<n; j++){
      r1= strcmp(sgpa[i],sgpa[j]);
      if(r1<0){
         strcpy(tmp2[i],sgpa[i]);
         strcpy(sgpa[i],sgpa[j]);
         strcpy(sgpa[j],tmp2[i]);
      }
    }
   }
    return sgpa[n];
}

int main()
{
    printf("Note: shorting problem \"name - id - SGPA\".\n");
    printf("How many student you want to enter: ");
    scanf("%d",&n);
    getchar();
    char name[n][100];
    char id[n][100];
    char sgpa[n][100];
     printf("please enter name - id - SGPA sequenclly...\n\n");
    for(i=0; i<n; i++)
        scanf("%s %s %s", name[i], id[i], sgpa[i]);
    printf("\nwhat type you want to shorting?\nPress \"1\" for \"name\" wise.\npress \"2\" for \"id\" wise.\npress \"3\" for SGPA wise.\n");
    printf("please enter a digit: ");
    scanf("%d",&digit);
    printf("\n");
    if(digit==1){
       Name(n,name);
    for(i=0; i<n; i++)
        printf("%s\n", name[i]);
    }
    else if(digit==2){
       Id(n,id);
       for(i=0; i<n; i++)
        printf("%s\n", id[i]);
    }
    else if(digit==3){
       Sgpa(n,sgpa);
     for(i=0; i<n; i++)
        printf("%s\n", sgpa[i]);
    }
    return 0;
}
