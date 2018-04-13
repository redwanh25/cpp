#include<iostream>
using namespace std;

struct node{
    char data;
    node* link;
};
node* head;

void push(char ch)
{
    node* temp = new node();
    temp -> data = ch;
    temp -> link = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    temp -> link = head;
    head = temp;
}

char top()
{
    return head -> data;
}

int main()
{
    head = NULL;
    int n, k = 0;
    char ch;
    cin >> n;
    cin >> ch;
    push(ch);
    while(--n){
        cin >> ch;
        if(top() == ch){
            k++;
        }
        push(ch);
    }
    cout << k << endl;
    return 0;
}
