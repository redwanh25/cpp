#include <iostream>
#include <map>
using namespace std;
int main ()
{
    map<char,int> mymap;
    mymap['x']=1001;
    mymap['y']=2002;
    mymap['z']=3003;

///  map <char, int> :: reverse_iterator rit=mymap.rbegin();
///  pair<char,int> highest = *rit;    // last element

    pair<char, int> highest = *mymap.rbegin();  // last element
    map<char,int>::iterator it = mymap.begin();
    do {
        cout << it->first << " => " << it->second << '\n';
    } while ( mymap.value_comp()(*it++,highest) );
    return 0;
}
