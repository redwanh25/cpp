#include<iostream>
#include<map>
using namespace std;
int main()
{
    pair <char, int> red;
    map <char, int> r;

    r['a'] = 1;

    r.insert(pair <char, int> ('f', 2));

    red.first = 'c';
    red.second = 3;
    r.insert(red);

    for(auto it = r.begin(); it != r.end(); it++){
        cout << it->first << " " << (*it).second << endl;
    }

    cout << endl << r['a'] << endl << endl;

    for(char i = 'a'; i <= 'z'; i++){
        if(r.count(i)){     /// if(r.count(i))   same as   if(r.find(i) != r.end())
            cout << r[i] << " ";
        }
    }
    return 0;
}
