#include<stdio.h>
int main()
{
    int i,j,k,n,l,m,x,y,p,q,u,r,s,t,v,w,o;
    char ch;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %d",&x,&y);
    int a[x],b[x],temp;
        for(j=0; j<x; j++)
            scanf("%d",&a[j]);
        for(k=0; k<y; k++){
            scanf(" %c",&ch);
                if(ch=='S'){
                    scanf("%d",&r);
                    for(l=0; l<x; l++)
                        a[l]+=r;
                }
                else if(ch=='M'){
                    scanf("%d",&s);
                    for(m=0; m<x; m++)
                        a[m]*=s;
                }
                else if(ch=='D'){
                    scanf("%d",&t);
                    for(u=0; u<x; u++)
                        a[u]/=t;
                }
                else if(ch=='R'){
                    for(v=x-1,w=0; v>=0; v--,w++)
                         b[w]=a[v];
                    for(w=0; w<x; w++)
                         a[w]=b[w];
                }
                else if(ch=='P'){
                    scanf("%d %d",&p,&q);
                    temp=a[p];
                    a[p]=a[q];
                    a[q]=temp;
                }
            }
            printf("Case %d:\n%d",i,a[0]);
            for(o=1; o<x; o++)
               printf(" %d",a[o]);
               printf("\n");
        }
    return 0;
}
