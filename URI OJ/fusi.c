#include<stdio.h>
void fib(unsigned long long b[],int j)
{
    int i;
	for(i=0;i<=j;i++)
	{
		if(i==0)
		 b[i]=0;
		 else if(i==1)
		 b[i]=1;
		 else b[i]=b[i-1]+b[i-2];
	}
}
int main()
{
	unsigned long long int a[61];
	int b,i,j,k,c;
	for (i=0;i<=61;i++)
	      fib(a,i);
	scanf("%d",&c);
	for (i=0;i<c;i++)
	{
		scanf("%d",&b);
		printf("Fib(%d) = %llu\n",b,a[b]);
	}
	return 0;
}
