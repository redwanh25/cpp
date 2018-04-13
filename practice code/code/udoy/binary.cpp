#include<stdio.h>
#include<conio.h>

int power(int, int);

int main()
{
    int a[100];
    int n,dec=0;
    int j=0,f;
    int i;
    printf("enter the number of bits for which you want of calculate decimal \n");
    scanf("%d",&n);
    printf("enter binary number one by one \n");

    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }

    for(i=(n-1);i>=0;i--)
    {
        dec=(a[i]*power(2,j))+dec;
        j++;
    }
    printf("binary number of decimal is %d",dec);
    getch();
}

int power(int c, int d)
{
    int pow=1;
    int i=1;
    while(i<=d)
    {
        pow=pow*c;
        i++;
    }
    return pow;
}
