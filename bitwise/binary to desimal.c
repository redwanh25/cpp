#include<stdio.h>
#include<math.h>
void func(char s[100]);
int func1(char s[100]);
int i,j,k,len,len1,len_m;
void func(char s[100])
{
    int ck=0;
    double sum=0;
    len=func1(s);
    len=len-1;
    for(i=0; s[i]!='\0'; i++){
        if(s[i]=='.'){
            len1=(len+1)-i;
            len=i-1;
            break;
        }
    }
    for(i=0; s[i]!='\0'; i++,len--){
        if(s[i]=='.'){
            ck=1;
            for(j=i+1,k=-1; s[j]!='\0'; j++,k--)
                sum+=(s[j]-'0')*(pow(2,k));
            printf("%.2lf\n",sum);
        }
        if(ck==0)
            sum+=(s[i]-'0')*(pow(2,len));
    }
    if(ck==0)
        printf("%.2lf\n",sum);
}
int func1(char s[100])
{
    for(i=0; s[i]!='\0'; i++)
        len_m++;
    return len_m;
}
int main()
{
    char s[100];
    while(scanf("%s",s)!=EOF)
    func(s);
    return 0;
}
