#include<iostream>
#include<cstdio>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map <char, string> red;
    red['A']="Arif";
    red['B']="Bangla";
    red['C']="Cat";
    map <char, string> :: iterator it;
    for(it=red.begin(); it!=red.end(); it++)
        cout<<it->first<<" - "<<it->second<<endl;
    it=red.begin();
    while(!red.empty()){
     //   cout<<red.begin()->second<<" ";
        cout<<it++->second<<" ";
        red.erase(red.begin());         // Arif Bangla Cat

    /*    cout << it->second << " ";
          it = red.erase(red.begin());    // Arif Bangla Cat
    */
    }
    cout<<endl<<red.size()<<" "<<red.max_size()<<endl;
    return 0;
}
