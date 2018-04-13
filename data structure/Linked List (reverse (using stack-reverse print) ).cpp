#include<iostream>
#include<stack>
using namespace std;

struct node
{
    int data;
    node* link;
};
node* head;
void insert(int x)
{
    node* temp = new node();
    temp->data = x;
    temp->link = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    node* temp2 = head;
    while(temp2->link != NULL){
        temp2 = temp2->link;
    }
    temp2->link = temp;
}
void reverse()
{
    stack <node*> s;
    node* temp = head;
    while(temp != NULL){
        s.push(temp);
        temp = temp->link;
    }
    while(!s.empty()){
        cout<< s.top()->data <<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    head = NULL;
    insert(2);
    insert(3);
    insert(4);
    reverse();
    return 0;
}
