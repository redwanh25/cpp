#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char s[10];
    int n,i;
    cin>>n;
    while(n--){
        cin>>s;
        if((s[0]=='o' && s[1]=='n') || (s[1]=='n' && s[2]=='e') || (s[2]=='e' && s[0]=='o'))
            cout<<"1"<<endl;
        else if((s[0]=='t' && s[1]=='w') || (s[1]=='w' && s[2]=='o') || (s[2]=='o' && s[0]=='t'))
            cout<<"2"<<endl;
        else if(s[0]=='t' && s[1]=='h' && s[2]=='r' && s[3]=='e')
            cout<<"3"<<endl;
        else if(s[1]=='h' && s[2]=='r' && s[3]=='e' && s[4]=='e')
            cout<<"3"<<endl;
        else if(s[1]=='h' && s[0]=='t' && s[3]=='e' && s[4]=='e')
            cout<<"3"<<endl;
        else if(s[0]=='t' && s[3]=='e' && s[2]=='r' && s[4]=='e')
            cout<<"3"<<endl;
        else if(s[0]=='t' && s[1]=='h' && s[2]=='r' && s[4]=='e')
            cout<<"3"<<endl;
        else if(s[0]=='f' && s[2]=='o' && s[3]=='u' && s[4]=='r')
            cout<<"4"<<endl;
        else if(s[0]=='f' || s[1]=='i' || s[2]=='v' || s[3]=='e')
            cout<<"5"<<endl;
        else if(s[0]=='s' || s[1]=='i' || s[2]=='x')
            cout<<"6"<<endl;
        else if(s[0]=='s' || s[1]=='e' || s[2]=='v' || s[3]=='e' || s[4]=='n')
            cout<<"7"<<endl;
        else if(s[0]=='e' || s[1]=='i' || s[2]=='g' || s[3]=='h' || s[4]=='t')
            cout<<"8"<<endl;
        else if(s[0]=='n' || s[1]=='i' || s[2]=='n' || s[3]=='e')
            cout<<"9"<<endl;
        else if(s[0]=='t' || s[1]=='e' || s[2]=='n')
            cout<<"10"<<endl;
    }
    return 0;
}
