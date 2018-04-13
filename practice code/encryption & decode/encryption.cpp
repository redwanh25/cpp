/// encryption....
#include<stdio.h>
int main()
{
    char s1[100000],s2[100000];
    int i,m,j,k,l;
    scanf("%[!-~ ]",s1);
    for(i=0; s1[i]!='\0'; i++)
            s1[i]=s1[i]+3;
//    printf("%s\n",s1);
    l=0;
    for(j=i-1; j>=0; j--)
    {
        s2[l++]=s1[j];
        l++;
    }
//    printf("%s\n",s2);
    m=i/2;
    for(k=0; k<i; k++)
    {
        if(k<m)
           s2[k]=s2[k];
        else if(k>=m)
           s2[k]=s2[k]-1;
    }
    printf("%s\n",s2);
    return 0;
}
