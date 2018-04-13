#include <stdio.h>
int main()
{
    long double X;
    char s[120];
    while(scanf("%LE", &X)!=EOF){
    sprintf(s,"%LE", X);
    if(s[0] != '-')
        printf("+");
    printf("%.4LE\n", X);
    }
    return 0;
}
