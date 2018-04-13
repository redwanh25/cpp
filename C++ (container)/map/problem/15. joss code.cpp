/// problem link : http://codeforces.com/problemset/problem/43/A

/*
input :
5
A
ABA
ABA
A
A
output : A
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    map <string, int> mp;
    while(n--)
    {
        cin >> str;
        mp[str]++;      /// look a this line.
    }
    map <string, int> :: iterator i=mp.begin(), j=mp.begin();
    j++;

    if(mp.size()==1){
        cout << i->first;
    }
    else if(i->second > j->second){
        cout << i->first;
    }
    else{
        cout << j->first;
    }
    return 0;
}
