#include<iostream>
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
    node* temp1 = head;
    while(temp1->link != NULL){
        temp1 = temp1->link;
    }
    temp1->link = temp;
}

void reverse()
{
    node *pre, *temp, *next;
    temp = head;
    pre = NULL;
    while(temp != NULL){
        next = temp->link;
        temp->link = pre;
        pre = temp;
        temp = next;
    }
    head = pre;
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
    int n,x;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> x;
        insert(x);
    }
    print();
    reverse();
    print();
    return 0;
}
