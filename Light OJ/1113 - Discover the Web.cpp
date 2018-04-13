#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
    deque <string> red;
    red.push_back("http://www.lightoj.com/");
    deque <string> :: iterator it = red.begin();
    int n;
    cin >> n;
    string s, s1;
    for(int i = 1; i <= n; i++){
        cout << "Case " << i << ":" << endl;
        do{
            cin >> s;
            if(s == "VISIT"){
                red.erase(it+1, red.end());
                cin >> s1;
                red.push_back(s1);
                cout << red.back() << endl;
                it++;
            }
            else if(s == "BACK"){
                if(*it == red[0]){
                    cout << "Ignored" << endl;
                }
                else{
                    cout << *(--it) << endl;
                }
            }
            else if(s == "FORWARD"){
                if(*it == red.back()){
                    cout << "Ignored" << endl;
                }
                else{
                    cout << *(++it) << endl;
                }
            }
        } while(s != "QUIT");
        red.clear();
        red.push_back("http://www.lightoj.com/");
        it = red.begin();
    }
    return 0;
}
