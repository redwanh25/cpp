#include<stdio.h>
#include<math.h>
double func (char s[100]);
int func1(char s[100]);
int i,j,k,len,len1,len_m;
double sum;
double func(char s[100])
{
//    int ck=0;
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
 //           ck=1;
            for(j=i+1,k=-1; k>-len1 ; j++,k--)   /// s[i]!='\0' dileo hobe.
                sum+=(s[j]-'0')*(pow(2,k));
            return sum;
        }
//        if(ck==0)
        sum+=(s[i]-'0')*(pow(2,len));
    }
//   if(ck==0)
    return sum;
}
int func1(char s[100])
{
    for(i=0; s[i]!='\0'; i++)
        len_m++;
    return len_m;
}
void main()
{
   char s[100];
   double a;
   gets(s);
   a=func(s);
   printf("%.2lf",a);
}
