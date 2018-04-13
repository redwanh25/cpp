#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,ln,ck,ck1;
    char s[100];
    while(gets(s)){
            ck=0,ck1=0;
        ln=strlen(s);
        for(i=0; i<ln; i++){
           if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                if(ck1==0){
                    if (s[i]>='a' && s[i]<='z')
                        s[i]='A'+(s[i]-'a');
                    else if (s[i]>='A' && s[i]<='Z')
                        s[i]=s[i];
                    ck1=1;
                }
                else if(ck==0){
                    if (s[i]>='a' && s[i]<='z')
                        s[i]=s[i];
                    else if (s[i]>='A' && s[i]<='Z')
                        s[i]='a'+(s[i]-'A');
                    ck=1;
                }
                else if(ck==1){
                    if (s[i]>='a' && s[i]<='z')
                        s[i]='A'+(s[i]-'a');
                    else if (s[i]>='A' && s[i]<='Z')
                        s[i]=s[i];
                    ck=0;
                }
            }
          }
          puts(s);
        }
    return 0;
}
