#include<iostream>
#include<map>
using namespace std;
int main()
{
    char ch;
    map <char, string> red;
    red.insert(pair<char, string>('2',"jubaer"));
    red.insert(pair<char, string>('a',"redwan"));

    for(ch='a'; ch<='z'; ch++){
        if(red.count(ch) > 0){  /// khuje paile 1 return korbe. r na paile 0 return korbe..
            cout<<ch<<" ase"<<endl;
            return 0;
        }
    }
    cout<<"nai"<<endl;
 /*
    auto it = red.begin();
    for( ; it != red.end(); it++){
        if(red.count(it->first) > 0){  /// khuje paile 1 return korbe. r na paile 0 return korbe..
            cout << it -> first <<" ase" << endl;
        }
    }
*/
    return 0;
}
