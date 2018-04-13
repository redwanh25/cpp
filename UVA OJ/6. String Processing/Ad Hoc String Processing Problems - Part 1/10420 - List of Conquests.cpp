#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int i,j,k,l,n,m,c,a[2005],o,p,x,y;
    char s[2005][100],s1[2005][100],temp[100],s2[2005][100];
    cin>>n;
    getchar();
    for(i=0; i<n; i++){
        gets(s[i]);
        for(x=0; s[i][x]==' '; x++);

        for(j=0; s[i][x]!=' '; j++,x++)
            s1[i][j]=s[i][x];
    }
    for(k=0; k<n; k++){
        for(l=k+1; l<n; l++){
            if(strcmp(s1[k],s1[l])>0){
                strcpy(temp,s1[k]);
                strcpy(s1[k],s1[l]);
                strcpy(s1[l],temp);
            }
        }
    }
    for(k=0,o=0; k<n; o++){
        c=0;p=k;
        strcpy(s2[o],s1[p]);
        for(l=k; l<=k; l++){
            if(strcmp(s1[p],s1[l])==0){
                a[o]=++c; k++;
            }
        }
    }
    for(y=0; y<o; y++)
        cout<<s2[y]<<" "<<a[y]<<endl;
    return 0;
}
