#include<stdio.h>
 int main()
 {
     int x,y,z,res;
     while(scanf("%d %d %d",&x,&y,&z)!=EOF){
      res=(x*y*z)*2;
      printf("%d\n",res);
     }
     return 0;
 }
