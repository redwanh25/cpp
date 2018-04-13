#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main()
{
//  vector < pair < int, pair < char, pair < int, int > > > > r;
    deque < pair < int, pair < char, pair < int, int > > > > r;
    r.push_back(make_pair(2, make_pair('c', make_pair(4, 5))));
    r.push_back(make_pair(4, make_pair('a', make_pair(30, 1))));
    int a = (r[0].second.second.first / 2) + r[1].first;
    char ch = r[1].second.first + 1;
    cout << a << endl;
    cout << ch << endl;
    if(r[1].second.second.first == 30){
        cout << "true" << endl;
    }
//  vector < pair <bool, int> > red[2];
    deque < pair < bool, int > > red[2];
    bool k = true;
    for(int i = 0; i < 2; i++){
        for(int j = 2; j < 5; j++){
            red[i].push_back(make_pair(k, j));
        }
        k = false;
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << "( " << red[i][j].first << " , " << red[i][j].second << " )   ";
        }
        cout << endl;
    }
    return 0;
}
