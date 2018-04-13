#include <stdio.h>
int main()
{
    int a1[] ={3,1,5,2,4};
    int a2[5];
    int i,m,in,x;
    for(in=0; in<5; in++){
            m=10000;
       for(i=0;i<5;i++){
             if (a1[i]<m){
               m=a1[i];
               x=i;
            }
         }
      a1[x]=10000;
        a2[in]=m;
    }
    for(i=0;i<5;i++)
       printf("%d\n",a2[i]);
      return 0;
}
