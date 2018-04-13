/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char i{0}, c;
    while(cin >> c && i != 5)
        i += c == "hello" [i];
    cout<< (i == 5 ? "YES\n" : "NO\n");
}
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	char a[6]{"hello"};
	int i = 0;
	char x;
	while((x = getchar()) != '\n'){
		if (a[i] == x && ++i == 5)
			return cout << "YES", 0;
	}
	cout << "NO";
}
