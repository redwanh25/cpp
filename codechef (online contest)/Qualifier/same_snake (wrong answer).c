#include<stdio.h>
int main()
{
    long long int i,t,x1,y1,x2,y2,a1,b1,a2,b2,temp,temp1,temp2,temp3,temp4;
    scanf("%lli",&t);
    for(i=0; i<t; i++){
        scanf("%lli %lli %lli %lli",&x1,&y1,&x2,&y2);
        scanf("%lli %lli %lli %lli",&a1,&b1,&a2,&b2);
    if(x1==x2){
        temp4=y1;
        y1=x1;
        x1=temp4;

        temp1=y2;
        y2=x2;
        x2=temp1;

        temp2=b2;
        b2=a2;
        a2=temp2;

        temp3=b1;
        b1=a1;
        a1=temp3;
    }
    if(x1>x2 && x2>=0){
        temp=x2;
        x2=x1;
        x1=temp;
    }
    if(y1>y2 && y2>=0){
        temp=y2;
        y2=y1;
        y1=temp;
    }
    if (a1>a2 && a2>=0){
        temp=a2;
        a2=a1;
        a1=temp;
    }
    if(b1>b2 && b2>=0){
        temp=b2;
        b2=b1;
        b1=temp;
    }
    if((a1<x1) && (y1==b1) && ((a2>=x1 && a2<=x2) || a2>=x2) && (y2==b2))
        printf("yes\n");
    else if ((a1>=x1 && a1<=x2) && (y1==b1) && (a2>=x2 || (a2<=x2 && a1<=a2)) && (y2==b2))
        printf("yes\n");
    else if((a1==x1) && (b1==y1) && (a2==x1) && (b2>=y1 || b2<y1))
        printf("yes\n");
    else if((a1==x2) && (b1==y1) && (a2==x2) && (b2>=y2 || b2<y2))
        printf("yes\n");
    else
        printf("no\n");
    }
    return 0;
}

