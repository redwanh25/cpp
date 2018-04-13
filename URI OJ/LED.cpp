#include<iostream>
#include<string>
using namespace std;
int main()
{
    char c;
    int n;
    cin>>n;
    cin.get();
    while(n--){
        int res=0;
        do{
            c=cin.get();
            if(c=='1')
                res += 2;
            else if(c=='2' || c=='3' || c=='5')
                res += 5;
            else if(c=='4')
                res += 4;
            else if(c=='6' || c=='9' || c=='0')
                res+=6;
            else if(c=='7')
                res+=3;
            else if(c=='8')
                res+=7;
        }while(c!='\n');
        cout<<res<<" leds"<<endl;
    }
    return 0;
}
