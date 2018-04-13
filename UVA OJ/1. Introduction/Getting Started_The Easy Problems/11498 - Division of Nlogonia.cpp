#include<iostream>
using namespace std;
int main()
{
	int n,dx,dy,x,y;
	while(cin>>n && n){
    cin>>dx>>dy;
    while(n--){
        cin>>x>>y;
        if(x==dx || y==dy)
            cout<<"divisa";
        else if(x<dx && y>dy)
            cout<<"NO";
        else if(x>dx && y>dy)
            cout<< "NE";
        else if(x>dx && y<dy)
            cout<<"SE";
        else if(x<dx && y<dy)
            cout<<"SO";
        cout<<endl;
      }
	}
	return 0;
}
