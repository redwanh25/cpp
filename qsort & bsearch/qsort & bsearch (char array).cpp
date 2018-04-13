#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int qs(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

int bs(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

int main()
{
    char s[100]="redwan";
    cout<<s<<endl;
    qsort(s, strlen(s) , sizeof(char), qs);
    cout<<s<<endl;
    char *item,key;
    key=cin.get();
    item = (char *) bsearch(&key, s, strlen(s), sizeof(char), bs);
    if(item != NULL)
        printf("find : %c\n", *item);
    else
        cout<<"not found"<<endl;
    return 0;
}
