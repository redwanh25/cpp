#include<stdio.h>
#include<string.h>
int main()
{
    char s[5],s1[105];
    int i,j,k,l;
    while(scanf("%s %s",s,s1)!=EOF){
        int ck=0;
        for(i=0; s1[i]!='\0'; i++){
            j=i;
            if(s1[i]==s[0]){
                    ck++;
                for(k=i+1; s1[k]!='\0'; k++)
                    s1[j++]=s1[k];
                    printf("%s",s1);
            }
            s1[strlen(s1)-ck]='\0';
            printf("\n");
        }
        s1[i-ck]='\0';
        printf("%s\n",s1);
    }

    return 0;
}
