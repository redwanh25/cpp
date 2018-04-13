#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,ln;
    char s[100];
    while(gets(s)){
        ln=strlen(s);
        for(i=0; i<ln; i++){
        if(s[i]>='a' && s[i]<='z'){
             if(s[i]>='a' && s[i]<='m')
                  s[i]=s[i]+13;
             else if(s[i]>='n' && s[i]<='z')
                s[i]=('a'-1)+(s[i]-'m');
            }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+13;
             if(s[i]>='A' && s[i]<='Z')
                  s[i]=s[i];
            else if(s[i]>='Z')
                s[i]=('A'-1)+(s[i]-'Z');
            }
        }
        s[i]='\0';
        puts(s);
    }
    return 0;
}
