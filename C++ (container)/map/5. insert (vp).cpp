#include <iostream>
#include <map>
using namespace std;
int main()
{
    map <char, int> red;

//(1) //  map <char, int> red {{'a', 10001},{'b', 10002},{'c', 10003},{'c', 10002},{'c', 10004}};

//(2)
    red.insert(make_pair('a', 10001));
    red.insert(make_pair('b', 10002));
    red.insert(make_pair('c', 10003));
    red.insert(make_pair('c', 10002));
    red.insert(make_pair('c', 10004));
    /// multimap a ai vabe value nite hoy. nicher vabe korle hoy na.

//(3)
//  red.insert ( pair <char,int> ('a', 10001));
//  red.insert ( pair <char,int> ('b', 10002));
//  red.insert ( pair <char,int> ('c', 10003));
//  red.insert ( pair <char,int> ('c', 10002));
//  red.insert ( pair <char,int> ('c', 10004));

/// ai 3 ta system a shobar  "" age ""  je map a dhuke she e thake, r baki shob
/// duplicate key value gulo automatic remove hoye jay.

//    red['a']=10001;
//    red['b']=10002;
//    red['c']=10003;
//    red['c']=10002;
//    red['c']=10004;

/// r ai system a shobar  "" sheshe ""  je map a dhuke she e thake, r baki shob
/// duplicate key value gulo automatic remove hoye jay.

    for(auto it = red.begin(); it != red.end(); it++){
        cout << red[it -> first] << endl;
    }
    return 0;
}
