#include<stdio.h>
void func(int x, int y, int arr[10][10])
{
    char ch;
    printf("type comand:\n");
    while(scanf("%c",&ch)!=EOF){
        if(ch=='u'){
            x--;
            if(arr[x][y]==0)
                x++;
            else
                x=x;
        }
        else if(ch=='d'){
            x++;
            if(arr[x][y]==0)
                x--;
            else
                x=x;
        }
        else if(ch=='r'){
            y++;
            if(arr[x][y]==0)
                y--;
            else
                y=y;
        }
        else if(ch=='l'){
            y--;
            if(arr[x][y]==0)
                y++;
            else
               y=y;
        }
        else if(ch=='s')
            break;
    }
    printf("%d %d\n",x,y);
}
int main()
{
    int x,y,n,a,b,arr[10][10],i,j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++)
            arr[i][j]=1;
    }
    scanf("%d %d",&x,&y);
    printf("tell me how many cell i won't go: ");
    scanf("%d",&n);
    printf("tell me which cell i won't go:\n");
    for(i=0; i<n; i++){
        scanf("%d %d",&a,&b);
        arr[a][b]=0;
    }
    func(x,y,arr);
    return 0;
}
