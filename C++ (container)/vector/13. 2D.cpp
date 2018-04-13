#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector< vector <int> > a(5);
/// vector < int > a[5];

    for(int i = 0; i < 5; i++){
        for(int j = 5; j <= 10; j++){
            a[i].push_back(j);
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << a[3].size() << endl;    /// 6

///    cout << endl << a.size() << endl;   /// this line doesn't work.
    return 0;
}
