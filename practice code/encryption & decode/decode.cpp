/// decode

#include<stdio.h>
int main()
{
    char s1[100000], redwan[100000];
    int i,j,k,m,ln,l = 0;
    scanf("%[!-~ ]",s1);
    for(ln=0; s1[ln]!='\0'; ln++);
    m=ln/2;
    for(i=0; i<ln; i++)
    {
        if(i<m)
            s1[i]=s1[i];
        else if(i>=m)
            s1[i]=s1[i]+1;
    }
    for(j=ln-1; j>=0; j--)
    {
        redwan[l]=s1[j];
        l++;
    }
    for(k=0; k<ln; k++)
        redwan[k]=redwan[k]-3;
    printf("%s\n",redwan);
    return 0;
}
