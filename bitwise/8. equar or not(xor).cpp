/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    while(cin>>s1>>s2){
        bool ck;
        if(s1.length()==s2.length()){
            for(int i=0; i<s1.length(); i++){
                if(s1[i]^s2[i]){    /// same hole 0 hobe. r na hole 1 hobe.
                    ck=false;
                    break;
                }
                else
                    ck=true;
            }
            cout<<(ck ? "same" : "not same")<<endl;
        }
        else
            cout<<"not same"<<endl;
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    while(cin >> x >> y){
        z = x^y;
        cout<< z <<endl;
    }
    return 0;
}

