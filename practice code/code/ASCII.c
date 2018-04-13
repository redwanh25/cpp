#include<stdio.h>
int func(char x)
{
    if(x>='0' && x<='9')
        return 1;
    else
        return 0;

}
int main()
{
    char c;
    int res;
    while(scanf(" %c",&c)!=EOF){
 //           getchar();
    res=func(c);
    printf("%d\n",res);
    }
    return 0;
}
