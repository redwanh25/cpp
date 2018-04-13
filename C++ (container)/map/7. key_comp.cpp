#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <char, int> red;
    red['a']=10001;
    red['b']=10002;
    red['c']=10003;
    map<char,int>::key_compare redwan=red.key_comp();
    map<char,int>::iterator it=red.end();
    it--;it--;
/*
    int hight=it->second;      /// char hight=red.rbegin()->first;
    it=red.begin();
    do{
        cout<<it->first<<" "<<it->second<<endl;
    }while(redwan((*it++).second, hight));
*/
    char hight=it->first;      /// char hight=red.rbegin()->first;
    it=red.begin();
    do{
        cout<<it->first<<" "<<it->second<<endl;
    }while(redwan((*it++).first , hight)); ///  (.. < ..)
    return 0;
}
