#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    pair<int,int> apair;
    vector<pair<int,int> > v_temp;
    vector< vector<pair<int,int> > > pair2dvector;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            apair.first = i;
            apair.second = j;
            v_temp.push_back(apair);
        }
        pair2dvector.push_back(v_temp);
        v_temp.clear();
    }

    for (auto it = pair2dvector.begin(); it != pair2dvector.end(); ++it) {
        /// "auto" means "vector< vector<pair<int,int> > >::iterator"
        v_temp = *it;
        for (auto it2 = v_temp.begin(); it2 != v_temp.end(); ++it2) {
            /// "auto" means "vector<pair<int,int> >::iterator"
            apair = *it2;
            cout << "(" << apair.first << "," << apair.second << ") ; ";

  ///       cout << "(" << it2->first << "," << it2->second << ") ; ";
        }
        cout << '\n';
    }

    return 0;
}
