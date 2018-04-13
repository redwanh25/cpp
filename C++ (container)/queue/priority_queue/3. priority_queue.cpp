//#include <functional>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

template<typename T> void print_queue(T& q)
{
    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << '\n';
}

int main() {

///  aita max heap;
    priority_queue<int> q;      /// aita and
//  priority_queue<int, vector <int> > q;     same.

    for(int n : {1,8,5,6,3,4,0,9,7,2}){
        q.push(n);
    }
                        // 9 8 7 6 5 4 3 2 1 0
        q.pop();        // 8 7 6 5 4 3 2 1 0
        q.push(4);      // 8 7 6 5 4 4 3 2 1 0
        q.pop();        // 7 6 5 4 4 3 2 1 0
        q.pop();        // 6 5 4 4 3 2 1 0
        q.push(20);     // 20 6 5 4 4 3 2 1 0
        q.push(5);      // 20 6 5 5 4 4 3 2 1 0

    print_queue(q);     // 20 6 5 5 4 4 3 2 1 0


///  aita min heap;
    priority_queue<int, vector<int>, greater<int> > q2;
    /// priority queue is container adapter.
    /// priority queue is a underline container of vector.

    for(int n : {1,8,5,6,3,4,0,9,7,2})
        q2.push(n);

    print_queue(q2);

    return 0;
}
/// priority_queue<pair <int, int>, vector< pair <int, int> >, greater< pair <int, int> > > q2;
