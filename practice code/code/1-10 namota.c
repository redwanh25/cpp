 #include<stdio.h>
 void func();
 int b;
 void func()
 {
    int i,j,a,k,c;
    int arr[b][10];
    for(i=0; i<b; i++){
       for(j=0; j<10; j++){
            arr[i][j]=(i+1)*(j+1);
            printf("%d*%d = %d ",i+1,j+1,arr[i][j]);
         printf("\n");
       }
       printf("\n");
    }
 }
int main()
 {
     scanf("%d",&b);
     func();
 ///    func(b);    ai ta dileo kaj korbe...
     return 0;
 }
