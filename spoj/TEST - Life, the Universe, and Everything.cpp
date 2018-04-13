#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> red(100000);
    int i=0,j,a[100000];
    while(cin>>red.at(i++));
  //      i++;
  //  while(cin>>a[i++]);
    for(j=0; j<i ;j++){
        if(red.at(j)==42)
            break;
        cout<<red.at(j)<<endl;
    }
    return 0;
}
