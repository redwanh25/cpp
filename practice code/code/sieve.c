#include<stdio.h>
#include<math.h>
int N=5000,X;
int status[5001];
int main()
{
    int i,j;
    for(i=2; i<=N; i++)
        status[i]=0;
    X=sqrt(N);
    for(i=2; i<=X; i++){
        for(j=2*i; j<=N; j+=i)
            status[j]=1;
        }
    for(i=2; i<=N; i++){
        if(status[i]==0){
            printf("%d ",i);
        }
    }
    return 0;
}

