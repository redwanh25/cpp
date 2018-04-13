#include<iostream>
#include<cstdio>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<int, string> red;
    red[0]="redwan";
    red[2]="arif";
    red[1]="marjan";
    map<int, string>::reverse_iterator rit=red.rbegin();
    map<int, string>::iterator it;
    it=red.begin();
    red.insert(pair<int, string> (3,"ami"));
    for( ; rit!=red.rend(); rit++){
        cout<<"red["<<rit->first<<"] = "<<rit->second<<endl;
    }
    for( ; it!=red.end(); it++)
        cout<<"red["<<it->first<<"] = "<<it->second<<endl;
    return 0;
}
