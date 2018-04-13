#include <iostream>
#include <algorithm>    // std::make_heap, std::pop_heap, std::push_heap, std::sort_heap
#include <vector>
#include <queue>
using namespace std;

void print(vector <int> v)
{
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {10, 20, 30, 5, 15};
    vector <int> v(a, a+5);
    print(v);

    make_heap(v.begin(), v.end());  /// array te je vabe thake (heapify)
    print(v);
    cout << *(v.begin()+3) << endl;

    pop_heap(v.begin(), v.end());    /// root er shathe shesh element ta swap hoye sheshe
    print(v);                        /// chole ashbe.

    int b = v.back();
    v.pop_back();                    /// shesh element ta remove kore dibo
    print(v);

    cout << b << endl;

    v.push_back(99);        /// sheshe add hobe.
    print(v);

    make_heap(v.begin(), v.end());      /// just heap toiri kore. kono heapsort kore na.
//  push_heap(v.begin(), v.end());
    print(v);

    sort_heap(v.begin(), v.end());      /// min heap toiri kore.
    print(v);

    reverse(v.begin(), v.end());
    print(v);

    priority_queue <int, vector<int>, greater<int> > q(v.begin(), v.end());

    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}
