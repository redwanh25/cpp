#include<stdio.h>
int main()
{
    int i,n;
    printf("How many names do u want to write ? ");
    while(scanf("%d",&n)!=EOF){
        char S[n][100];
    for(i=0;i<n;i++)
    {
      scanf("%s", S[i]);
    }
    for(i=0;i<n;i++)                    /// এখানে  for(i=n-1;i>=0;i--) লুপ চালালে   output reverse print করতো     ///
    {
        printf("%s\n",S[i]);
    }

    }
    return 0;
}
