#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    int c=0;
    while(getline(cin,s)){
        if(s=="#")
            break;
        cout<<"Case "<<++c<<": ";
        if(s=="HELLO")
            printf("ENGLISH\n");
		else if(s=="HOLA")
            printf("SPANISH\n");
		else if(s.compare("HALLO")==0)
            printf("GERMAN\n");
		else if(s.compare("BONJOUR")==0)
            printf("FRENCH\n");
		else if(s.compare("CIAO")==0)
            printf("ITALIAN\n");
		else if(s.compare("ZDRAVSTVUJTE")==0)
            printf("RUSSIAN\n");
        else
            printf("UNKNOWN\n");
    }
    return 0;
}
