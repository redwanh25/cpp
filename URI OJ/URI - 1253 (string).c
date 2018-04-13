#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,m,j,ln;
    char s[100];
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%s",s);
        ln=strlen(s);
        scanf("%d",&m);
        for(j=0; j<ln; j++){
            s[j]=s[j]-m;
            if(s[j]<'A')
                s[j]=('Z'+1)-('A'-s[j]);

        }
        printf("%s\n",s);
    }
    return 0;
}
