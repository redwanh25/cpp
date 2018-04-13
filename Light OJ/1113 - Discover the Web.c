#include<stdio.h>
#include<string.h>
int main()
{
///    freopen("read/1113_Discover_the_Web.txt","r",stdin);
    char s[105][55],s1[10]="VISIT",s2[10]="BACK",s3[10]="FORWARD",s4[10]="QUIT",s5[10];
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        memset(s,0,sizeof(s));
        printf("Case %d:\n",i);
        int j=0;
        do{
            scanf("%s",s5);
            strcpy(s[0],"http://www.lightoj.com/");
            if(strcmp(s1,s5)==0){
                scanf("%s",s[++j]);            // link...
                printf("%s\n",s[j]);
                memset(s[j+1],0,sizeof(s[j+1]));
                }
            else if(strcmp(s2,s5)==0){      // BACK...
                if(0<j){
                    j--;
                    printf("%s\n",s[j]);
                }
                else if(j<=0)
                    printf("Ignored\n");
            }
            else if(strcmp(s3,s5)==0){      // FORWARD...
                if(strncmp(s[j+1],"http://",7)==0){
                    j=j+1;
                    printf("%s\n",s[j]);
                }
                else
                    printf("Ignored\n");
            }
        } while(strcmp(s4,s5)!=0);
    }
    return 0;
}
