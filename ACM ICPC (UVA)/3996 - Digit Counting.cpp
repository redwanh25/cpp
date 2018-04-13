#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a[10000];
char s[100];
void int_to_string(int a[], char s[])
{
    int i=0,j=0;
    while(a[i]!=0){
        s[j++]=(a[i]%10)+'0';
        a[i]=a[i]/10;
        if(a[i]==0)
            i++;
    }
    s[j]='\0';
}
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d",&x);
    for(int j=1,k=0; j<=x; j++)
        a[k++] = j;
    int_to_string(a,s);
    int a0=0, a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0;
    for(int k=0; s[k]!='\0'; k++){
        if(s[k]=='0')
            ++a0;
        else if(s[k]=='1')
            ++a1;
        else if(s[k]=='2')
            ++a2;
        else if(s[k]=='3')
            ++a3;
        else if(s[k]=='4')
            ++a4;
        else if(s[k]=='5')
            ++a5;
        else if(s[k]=='6')
            ++a6;
        else if(s[k]=='7')
            ++a7;
        else if(s[k]=='8')
            ++a8;
        else if(s[k]=='9')
            ++a9;
        }
        cout<<a0<<" "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<" "<<a7<<" "<<a8<<" "<<a9<<endl;
    }
    return 0;
}
