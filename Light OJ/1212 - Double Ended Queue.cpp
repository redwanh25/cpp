#include<iostream>
#include<deque>
#include<cstdio>
using namespace std;
int main()
{
//    freopen("in.txt", "r", stdin);
    deque <int> red;
    int n, a, b, x;
    string s;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Case " << i << ":" << endl;
        cin >> a >> b;
        while(b--){
            cin >> s;
            if(s == "pushLeft"){
                cin >> x;
                if(red.size() >= a){
                    cout << "The queue is full" << endl;
                }
                else{
                    red.push_front(x);
                    cout << "Pushed in left: " << red.front() << endl;
                }
            }
            else if(s == "pushRight"){
                cin >> x;
                if(red.size() >= a){
                    cout << "The queue is full" << endl;
                }
                else{
                    red.push_back(x);
                    cout << "Pushed in right: " << red.back() << endl;
                }
            }
            else if(red.empty()){
                cout << "The queue is empty" << endl;
            }
            else if(s == "popLeft"){
                cout << "Popped from left: " << red.front() << endl;
                red.pop_front();
            }
            else if(s == "popRight"){
                cout << "Popped from right: " << red.back() << endl;
                red.pop_back();
            }
        }
        red.clear();
    }
    return 0;
}

/*

            else if(s == "popLeft"){
                if(red.empty()){
                    cout << "The queue is empty" << endl;
                }
                else{
                    cout << "Popped from left: " << red.front() << endl;
                    red.pop_front();
                }
            }
            else if(s == "popRight"){
                if(red.empty()){
                    cout << "The queue is empty" << endl;
                }
                else{
                    cout << "Popped from right: " << red.back() << endl;
                    red.pop_back();
                }
            }

*/
