#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map <int, string> red;
    red[0]="valo";
    red[1]="ami";
    red[2]="akta";
    red[3]=red[0];
    red[4]="sele.";
    red.insert(pair<int,string>(5,"2mi ki..?"));
    map<int,string>::iterator it=red.begin();
    it++;
  ///  for(it=red.begin()+1; it!=red.end(); it++) //this loop doesn't work
    for( ; it!=red.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
 //   red.erase(2);
 //   it=red.find(2);
   // red.erase(it);
  // it=red.find(9);
  // red.erase(red.begin(),it);
   it=red.find(3);
   red.erase(it,--red.end());   ///red.end()-1  does not work
    for(it=++red.begin(); it!=red.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;

    return 0;
}
