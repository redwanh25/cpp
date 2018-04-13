#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char c[102][2],s[150002][10002];
int main()
{
    int i,j,k,l,x,y,z,a[102],sum,m;
    double res;
    cin>>x;
    for(j=1; j<=x; j++){
        cin>>y;
        sum=0;
    for(i=0; i<y; i++)
        cin>>c[i]>>a[i];
    cin>>z;
    getchar();
    for(k=0; k<z; k++){
        gets(s[k]);
        for(l=0; s[k][l]!='\0'; l++){
            for(m=0; m<y; m++){
                if(s[k][l]==c[m][0])
                    sum+=a[m];
                }
            }
        }
        res=sum/100.00;
        printf("%.2lf$\n",res);
    }
    return 0;
}
