/// becarefull two code. map er vitore due ta data type er moddhe jeta
/// age thakbe sheta kei shudhu find kora jabe...

#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
    map <char,string> red;
    red.insert ( pair <char,string> ('b',"ball"));
    red.insert ( pair <char,string> ('a',"ami"));
    red.insert ( pair <char,string> ('e',"cagol"));
    red.insert ( pair <char,string> ('g',"tonu"));

//    red.insert ( make_pair('b',"ball"));
//    red.insert ( make_pair('a',"ami"));
//    red.insert ( make_pair('e',"cagol"));
//    red.insert ( make_pair('g',"tonu"));

    map<char,string>::iterator it;
    it=red.begin();
    for( ; it!=red.end(); it++){
        cout<<it->first<<" <--> "<<it->second<<endl;
    }
    cout<<endl;
    map <char,string> redwan;
 //   redwan=red;
    redwan.insert(red.begin(),red.find('g'));
    for(it=redwan.begin(); it!=redwan.end(); it++)
        cout<<it->first<<" <--> "<<it->second<<endl;
    cout<<endl;
    it=redwan.find('b');
    if(it!=redwan.end())
        redwan.erase(it);
    for(it=redwan.begin(); it!=redwan.end(); it++)
        cout<<it->first<<" <--> "<<it->second<<endl;
    return 0;
}
/*
#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
    map <string, char> red;
    red.insert ( pair <string, char> ("ball",'b'));
    red.insert ( pair <string, char> ("ami",'a'));
    red.insert ( pair <string, char> ("cagol",'e'));
    red.insert ( pair <string, char> ("tonu",'g'));
    map<string, char>::iterator it;
    it=red.begin();
    for( ; it!=red.end(); it++){
        cout<<it->first<<" <--> "<<it->second<<endl;
    }
    cout<<endl;
    map <string, char> redwan;
 //   redwan=red;
    redwan.insert(red.begin(),red.find("tonu"));
    for(it=redwan.begin(); it!=redwan.end(); it++)
        cout<<it->first<<" <--> "<<it->second<<endl;
    cout<<endl;
    it=redwan.find("ball");
    if(it!=redwan.end())
        redwan.erase(it);
    for(it=redwan.begin(); it!=redwan.end(); it++)
        cout<<it->first<<" <--> "<<it->second<<endl;
    return 0;
}
*/
