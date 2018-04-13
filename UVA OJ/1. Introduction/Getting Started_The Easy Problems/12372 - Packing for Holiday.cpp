#include<iostream>
using namespace std;
int main()
{
    int n,l,w,h,c=0;
    cin>>n;
    while(n--){
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20){
            cout<<"Case "<<++c<<": good"<<endl;
        }
        else{
            cout<<"Case "<<++c<<": bad"<<endl;
        }
    }
    return 0;
}
