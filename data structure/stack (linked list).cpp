#include<iostream>
using namespace std;

struct node
{
    int data;
    node* link;
};
struct node* head;

void push(int x)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = x;
    temp->link = head;
    head = temp;
}
void pop()
{
    if(head == NULL){
        cout<< "empty" <<endl;
        return;
    }
    node* temp = head;
    head = temp->link;
    delete temp;
}
void top()
{
    cout<< head->data <<endl;
}
void print()
{
    node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->link;
    }
    cout<<endl;
}

int main()
{
    head = NULL;
 //   push(2);
 //   push(3);
    pop();
    push(2);
    push(3);
    top();
    pop();
    top();
    print();
    return 0;
}
