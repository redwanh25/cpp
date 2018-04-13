#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int k,sum=0;
    queue <int> red;
    for(int i=0; i<5; i++){
        cin>>k;
        red.push(k);
    }
    while(!red.empty()){
  ///   cout<<++red.front()<<" ";
        cout<<red.front()<<" ";
        sum+=red.front();
        red.pop();
    /*      cout<<red.back()<<" ";
            sum+=red.back()--;
            red.pop();      */
    }
    cout<<endl<<sum<<" "<<red.size()<<endl;
    return 0;
}
