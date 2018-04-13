#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int sum=0,k;
    stack <int> red;
    for(int i=0; i<5; i++){
        cin>>k;
        red.push(k);
    }
    while(!red.empty()){
        cout<<red.top()<<" ";
        sum+=red.top();
        red.pop();
    }
    cout<<endl<<sum<<" "<<red.size()<<endl;

    return 0;
}
