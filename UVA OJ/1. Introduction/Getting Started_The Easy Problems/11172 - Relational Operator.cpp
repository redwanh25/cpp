#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,j,x,y;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&y);
        if(x>y)
            printf(">\n");
        else if(x<y)
            printf("<\n");
        else
            cout<<"="<<endl;
    }
    return 0;
}
