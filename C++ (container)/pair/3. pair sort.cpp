#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main()
{
    vector <pair <int , pair < char, double> > > red;
    red.push_back(make_pair(3, make_pair('c', 3.4)));
    red.push_back(make_pair(2, make_pair('d', 3.4)));
    red.push_back(make_pair(2, make_pair('a', 5.4)));
    red.push_back(make_pair(3, make_pair('c', 2.4)));

    sort(red.begin(), red.end());

    cout << red[0].first <<" "<< red[0].second.first << " " << red[0].second.second << endl;
    cout << red[1].first <<" "<< red[1].second.first << " " << red[1].second.second << endl;
    cout << red[2].first <<" "<< red[2].second.first << " " << red[2].second.second << endl;
    cout << red[3].first <<" "<< red[3].second.first << " " << red[3].second.second << endl;
    return 0;
}

