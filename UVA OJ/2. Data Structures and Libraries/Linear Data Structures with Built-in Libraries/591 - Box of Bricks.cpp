#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n,c=0;
    while(cin>>n && n){
        vector <int> a(n);
        int sum=0,s=0;
        for(int i=0; i<n; i++){
            cin>>a.at(i);
            sum+=a.at(i);
        }
        int x=sum/n;
        for(int i=0; i<n; i++){
            if(a.at(i)<x){
                s += abs(x-a.at(i));
            }
        }
        cout<<"Set #"<<++c<<endl;
        cout<<"The minimum number of moves is "<<s<<"."<<endl<<endl;;
    }
    return 0;
}
