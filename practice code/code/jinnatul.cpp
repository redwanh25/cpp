#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    vector <int> red;
    int n, a, x, pos, value;
    printf("Enter Array Size : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(int i=0; i<n; i++){
		cin >> value;
		red.push_back(value);
	}
    printf("How many element you want to insert: ");
    scanf("%d", &a);
    for(int j=0; j<a; j++){
        printf("Enter element to be insert : ");
        scanf("%d",&x);
        printf("position : ");
        scanf("%d",&pos);
        red.insert(red.begin() + pos-1, x);
    }
    vector <int> :: iterator it;
    for(it = red.begin(); it != red.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
