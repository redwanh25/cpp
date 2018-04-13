#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque <string> red;
    red.push_back("redwan");
    red.push_back("hossain");
    deque <string> :: iterator it = red.begin();
    for( ; it != red.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
