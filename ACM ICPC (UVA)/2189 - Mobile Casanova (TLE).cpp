#include<bits/stdc++.h>
using namespace std;
void int_to_char(int x,char *s)
{
    int i,j,k,l,p=0;
    char s1[100];
        while(x!=0){
            s[p++]=(x%10)+'0';
            x=x/10;
        }
    s[p]='\0';
    int ln=strlen(s);
    reverse(s,s+ln);
    return;
}
int main()
{
/*
    clock_t start, en_d;
    double time;
    start = clock();
*/
    freopen("input/2189-Mobile Casanova.txt","r",stdin);
    int n,x,i,j,k,l,m,ln,ln1,o=0,y,q,r;
    while(scanf("%d",&n)!=EOF && n){
        char s[n+n],s1[n],s2[n+n],s3[n+n],s4[n+n],s5[n+n];
        int a[n];
        l=0;
        for(i=0; i<n; i++)
            cin>>a[i];
        cout<<"Case "<<++o<<":"<<endl;
        for(i=0; i<n; i++){
            if(a[i-1]+1!=a[i] && a[i]+1!=a[i+1]){
          //    cout<<"0"<<a[i]<<endl;
                memset(s4,0,sizeof(s4));
                memset(s5,0,sizeof(s5));
                int_to_char(a[i],s4);
                strcat(s5,"0");
                strcat(s5,s4);
                cout<<s5<<endl;
                l=0;
            }
            else if(a[i-1]+1!=a[i] && a[i]+1==a[i+1]){
                memset(s4,0,sizeof(s4));
                memset(s5,0,sizeof(s5));
                int_to_char(a[i],s4);
                strcat(s5,"0");
                strcat(s5,s4);
                strcat(s5,"-");
           //   cout<<"0"<<a[i]<<"-";
                memset(s,0,sizeof(s));
                memset(s1,0,sizeof(s1));
                memset(s2,0,sizeof(s2));
                memset(s3,0,sizeof(s3));
                int_to_char(a[i],s);   /// itoa(a[i],s,10);
                ln=strlen(s);
            }
            else if(a[i-1]+1==a[i] && a[i]+1==a[i+1]){
                l++;
            }
            else if(a[i-1]+1==a[i] && a[i]+1!=a[i+1]){
                l++,x=1;;
                for(j=ln-1; x>0; j--){
                    m=s[j]-'0';
                    x=(m+l)/10;
                    y=(m+l)%10;
                    if(y>0)
                        int_to_char(y,s2);  /// itoa(y,s2,10);
                    else
                        strcpy(s2,"0");
                    l=x;
                    strcat(s1,s2);
                }
                ln1=strlen(s1);
                for(q=0,r=ln1-1; r>=0; r--)
                    s3[q++]=s1[r];
                s3[q]='\0';
                strcat(s5,s3);
                cout<<s5<<endl;
            }
        }
        cout<<endl;
    }
/*
    en_d = clock();
    time = (double) (en_d-start)/CLOCKS_PER_SEC;
    cout<<time<<endl;
*/
    return 0;
}
