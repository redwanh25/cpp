#include<iostream>
#include<cstdio>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first, *last;

int Front() {
	if(first == NULL) {
		printf("Queue is empty\n");
		return 0;
	}
	return first -> data;
}

void in(int x)
{
    struct node *temp = new node();
    temp -> data = x;
    temp -> next = NULL;
    if(first == NULL && last == NULL){
        first = temp;
        last = temp;
        return;
    }
    last -> next = temp;
    last = temp;
}

void out()
{
    node * temp = first;
    if(first == NULL){
        cout << "empty" << endl;
        return;
    }
//    if(first == last){
//        first = last = NULL;
//    }
    first = temp -> next;
    delete temp;
}

void print()
{
    node * temp = first;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    first = NULL;
    last = NULL;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        in(x);
        print();
    }
    out();
    out();
    out();
  //  out();
    print();
    return 0;
}
