#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,p,q,n,ln1,ln2;
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++){
    char s[105],s1[105],s2[105],s3[105],temp;
        gets(s);
        gets(s1);
 //   ln1=strlen(s);
 //   ln2=strlen(s1);
    for(j=0,k=0; s[j]!='\0'; j++){
        if(s[j]>='A' && s[j]<='Z')
            s2[k++]='a'+(s[j]-'A');
        else if(s[j]>='a' && s[j]<='z')
            s2[k++]=s[j];
        }
        s2[k]='\0';
 //       printf("%s\n",s2);
    for(l=0,m=0; s1[l]!='\0'; l++){
        if(s1[l]>='A' && s1[l]<='Z')
            s3[m++]='a'+(s1[l]-'A');
        else if(s1[l]>='a' && s1[l]<='z')
            s3[m++]=s1[l];
        }
        s3[m]='\0';
    //    printf("%s\n",s3);
    for(p=0; s2[p]!='\0'; p++){
        for(q=1+p; s2[q]!='\0'; q++){
        if(s2[p]>s2[q]){
            temp=s2[p];
            s2[p]=s2[q];
            s2[q]=temp;
            }
        }
    }
    s2[p]='\0';
 //   printf("%s\n",s2);
    for(p=0; s3[p]!='\0'; p++){
        for(q=1+p; s3[q]!='\0'; q++){
        if(s3[p]>s3[q]){
            temp=s3[p];
            s3[p]=s3[q];
            s3[q]=temp;
            }
        }
    }
    s3[p]='\0';
  //  printf("%s\n",s3);
    if(strcmp(s2,s3)==0)
        printf("Case %d: Yes\n",i);
    else
        printf("Case %d: No\n",i);
    }
    return 0;
}
