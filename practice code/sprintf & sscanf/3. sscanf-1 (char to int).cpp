#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int s;
    char s1[100] = "12";
    sscanf(s1, "%d", &s);
    int i = s + 4;
    cout << s << " " << i << endl;
    return 0;
}

/*

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    char s[100][100];
    int a[100];
    int j = 0;
    while(j != 5){
        cin >> s[j++];
    }
    for(int i = 0; i < 5; i++){
        sscanf(s[i], "%d", &a[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

*/
