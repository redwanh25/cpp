#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
  //  freopen("read1/739 - Soundex Indexing.txt","r",stdin);
    string s,s1;
    bool ck[20];
    ck[0]=true;
    while(getline(cin,s)){
        for(int i=1; i<7; i++){
        ck[i]=true;
    }
        if(ck[0]){
            for(int i=1; i<10; i++)
                cout<<" ";
            cout<<"NAME";
            for(int i=14; i<35; i++)
                cout<<" ";
            cout<<"SOUNDEX CODE"<<endl;
            ck[0]=false;
        }
        for(int i=1; i<10; i++)
            cout<<" ";
            cout<<s;
        int ln = 10+s.length();
        for(int i=ln; i<35; i++)
            cout<<" ";
        for(int i=0; i<1; i++){
            if((s[i]=='B' || s[i]=='P' || s[i]=='F' || s[i]=='V') && ck[1]){
                s1+=s[i];
                ck[1]=false;
                ck[2]=true;
                ck[3]=true;
                ck[4]=true;
                ck[5]=true;
                ck[6]=true;
            }
            else if((s[i]=='C' || s[i]=='S' || s[i]=='K' || s[i]=='G' || s[i]=='J' || s[i]=='Q' || s[i]=='X' || s[i]=='Z') && ck[2]){
                s1+=s[i];
                ck[1]=true;
                ck[2]=false;
                ck[3]=true;
                ck[4]=true;
                ck[5]=true;
                ck[6]=true;
            }
            else if((s[i]=='D' || s[i]=='T') && ck[3]){
                s1+=s[i];
                ck[1]=true;
                ck[2]=true;
                ck[3]=false;
                ck[4]=true;
                ck[5]=true;
                ck[6]=true;
            }
            else if(s[i]=='L' && ck[4]){
                s1+=s[i];
                ck[1]=true;
                ck[2]=true;
                ck[3]=true;
                ck[4]=false;
                ck[5]=true;
                ck[6]=true;
            }
            else if((s[i]=='M' || s[i]=='N') && ck[5]){
                s1+=s[i];
                ck[1]=true;
                ck[2]=true;
                ck[3]=true;
                ck[4]=true;
                ck[5]=false;
                ck[6]=true;
            }
            else if(s[i]=='R' && ck[6]){
                s1+=s[i];
                ck[1]=true;
                ck[2]=true;
                ck[3]=true;
                ck[4]=true;
                ck[5]=true;
                ck[6]=false;
            }
            else
                s1+=s[i];
        }
        for(int i=1; i<s.length(); i++){
            if((s[i]=='B' || s[i]=='P' || s[i]=='F' || s[i]=='V') && ck[1]){
                s1+='1';
                ck[1]=false;
                ck[2]=true;
                ck[3]=true;
                ck[4]=true;
                ck[5]=true;
                ck[6]=true;
            }
            else if((s[i]=='C' || s[i]=='S' || s[i]=='K' || s[i]=='G' || s[i]=='J' || s[i]=='Q' || s[i]=='X' || s[i]=='Z') && ck[2]){
                s1+='2';
                ck[1]=true;
                ck[2]=false;
                ck[3]=true;
                ck[4]=true;
                ck[5]=true;
                ck[6]=true;
            }
            else if((s[i]=='D' || s[i]=='T') && ck[3]){
                s1+='3';
                ck[1]=true;
                ck[2]=true;
                ck[3]=false;
                ck[4]=true;
                ck[5]=true;
                ck[6]=true;
            }
            else if(s[i]=='L' && ck[4]){
                s1+='4';
                ck[1]=true;
                ck[2]=true;
                ck[3]=true;
                ck[4]=false;
                ck[5]=true;
                ck[6]=true;
            }
            else if((s[i]=='M' || s[i]=='N') && ck[5]){
                s1+='5';
                ck[1]=true;
                ck[2]=true;
                ck[3]=true;
                ck[4]=true;
                ck[5]=false;
                ck[6]=true;
            }
            else if(s[i]=='R' && ck[6]){
                s1+='6';
                ck[1]=true;
                ck[2]=true;
                ck[3]=true;
                ck[4]=true;
                ck[5]=true;
                ck[6]=false;
            }
            else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='W' || s[i]=='H'){
                ck[1]=true;
                ck[2]=true;
                ck[3]=true;
                ck[4]=true;
                ck[5]=true;
                ck[6]=true;
            }
            if(s1.length()==4){
                break;
            }
        }
        while(s1.length()<4){
            s1+='0';
        }
        cout<<s1<<endl;
        s1.clear();
    }
    for(int i=1; i<20; i++)
        cout<<" ";
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
