#include<stdio.h>
int main()
{
    int l,w;
    while(scanf("%d %d",&l,&w)!=EOF){
            printf("\n");
    int i,j,k,ck=0,c;
        for(i=1; i<=l; i++){
            c=0;
            if(ck==0){
                for(j=1; j<=w; j++)
                    printf("*");
                    }
            else{
                for(k=1; k<=w; k++){
                    if(c==0){
                        printf("*");
                        c=1;
                    }
                    else{
                        printf(" ");
                        if(k==(w-1))
                            c=0;
                    }
                  }
                }
            ck=1;
            if(i==(l-1))
                ck=0;
            printf("\n");
        }
        printf("\n\n");
    }

    return 0;
}

