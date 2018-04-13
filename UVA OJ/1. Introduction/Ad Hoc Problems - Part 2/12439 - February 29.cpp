#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    char s1[15],s2[15];
    cin>>n;
    int d1,y1,d2,y2,r1,r2;
    for(i=1; i<=n; i++){
        scanf("%s %d, %d",s1,&d1,&y1);
        scanf("%s %d, %d",s2,&d2,&y2);
        if(strcmp(s1,"January")==0 || strcmp(s1,"February")==0)
            y1--;
        r1 = y1/4- y1/100 + y1/400;
        if(strcmp(s2,"January")==0 || (strcmp(s2,"February")==0 && d2<=28))
            y2--;
        r2 = y2/4 - y2/100 + y2/400;
        cout<<"Case "<<i<<": "<<r2-r1<<endl;
    }
    return 0;
}
