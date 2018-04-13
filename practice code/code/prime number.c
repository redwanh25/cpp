#include<stdio.h>
#include<math.h>
int i,j;
int ck;
void func(int n)
{
    for(i=2; i<=n; i++){
        ck=1;
      for(j=2; j<sqrt(i); j++){
         if(i%j==0){
             ck=0;
            break;
        }
      }
    if(ck==1)
        printf("%d ",i);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}
