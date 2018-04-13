#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

main()
{
    vector <pair <int , pair <string , pair < char , pair < int, double> > > > > red;

    red.push_back(make_pair(2, make_pair("redwan", make_pair('c', make_pair(3, 3.4)))));
///   red.insert(red.begin(), make_pair(2, make_pair("redwan", make_pair('c', make_pair(3, 3.4)))));

    cout << red[0].first << endl;
    cout << red[0].second.first << endl;
    cout << red[0].second.second.first << endl;
    cout << red[0].second.second.second.first << endl;
    cout << red[0].second.second.second.second << endl;
    return 0;
}

