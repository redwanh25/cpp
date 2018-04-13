#include<iostream>
#include<vector>
#include<algorithm>   /// maybe swap function er jonno ai header file use na korleo hoy.
using namespace std;
int main()
{
    vector <int> r;
    vector <int> s;
    r.push_back(3);
    r.push_back(4);
      s.push_back(7);
      s.push_back(8);
      s.push_back(9);

/// swap(s[0],s[1]);
    swap(s.front(), s.back());
/// swap(s.at(0), s.at(2));
    r.swap(s);

    for(int i=0; i<r.size(); i++)
        cout<<r[i]<<" ";
    cout<<endl;
    for(int i=0; i<s.size(); i++)
        cout<<s[i]<<" ";
    cout<<endl;
    return 0;
}
