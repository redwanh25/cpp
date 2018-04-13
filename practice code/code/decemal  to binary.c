 #include<stdio.h>
 #include<math.h>
 #include<string.h>
 int i,j=0,k,b=0,z=0,l;
 char s[1000];
 void func(int n)
 {
     for(i=0; pow(2,i)<=n; i++)
         z++;
     int a[z];
     z=0;
     for(i=0; pow(2,i)<=n; i++){
         a[z]=pow(2,i);
         z++;
     }
     k=z-1;
      for(l=0; l<i; l++){
 //    for( ; a[k]>0; k--){
        if((b+a[k])<=n){
            b+=a[k];
            s[j]='1';
        }
        else
            s[j]='0';
 //       if(k==-1)
  //          break;
         k--;
        j++;
     }
     s[j]='\0';
 }

 int main()
 {
     int n;
     scanf("%d",&n);
     func(n);
     printf("%s\n",s);
     return 0;
 }
