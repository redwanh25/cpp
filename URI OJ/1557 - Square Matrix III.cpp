#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    while(cin>> n && n){
        int a[100];
        a[0]=1;
        if(n==1){
            printf("1\n");
        }
        else{
            char s[10];
            for(int i=0; i<n; i++){
                for(int j=i; j<n+i-1; ){
                    a[j] = a[j++]*2;
                }
            }
            int k=n*2-2;
            int l=0;
            while(a[k]!=0){
                s[l++] = a[k]%10 + '0';
                a[k] = a[k]/10;
            }
            s[l]='\0';
            int ln = strlen(s);
            for(int i=0; i<n; i++){
                if(ln==1)
                    printf("%1d",a[i]);
                else if(ln==2)
                    printf("%2d",a[i]);
                else if(ln==3)
                    printf("%3d",a[i]);
                else if(ln==4)
                    printf("%4d",a[i]);
                else if(ln==5)
                    printf("%5d",a[i]);
                else if(ln==6)
                    printf("%6d",a[i]);
                else if(ln==7)
                    printf("%7d",a[i]);
                else if(ln==8)
                    printf("%8d",a[i]);
                else if(ln==9)
                    printf("%9d",a[i]);
                for(int j=i; j<n+i-1; ){
                    a[j] = a[j++]*2;
                    if(ln==1)
                        printf("%2d",a[j]);
                    else if(ln==2)
                        printf("%3d",a[j]);
                    else if(ln==3)
                        printf("%4d",a[j]);
                    else if(ln==4)
                        printf("%5d",a[j]);
                    else if(ln==5)
                        printf("%6d",a[j]);
                    else if(ln==6)
                        printf("%7d",a[j]);
                    else if(ln==7)
                        printf("%8d",a[j]);
                    else if(ln==8)
                        printf("%9d",a[j]);
                    else if(ln==9)
                        printf("%10d",a[j]);
                }
                cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
