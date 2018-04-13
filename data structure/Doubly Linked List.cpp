#include<iostream>
using namespace std;
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* head;
void insert(int x)
{
    struct node* temp = new node();
    temp->prev = NULL;
    temp->data = x;
    temp->next = NULL;
    if(head != NULL){
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
}
void print()
{
    struct node* temp = head;
    if(1){
        while(temp != NULL){
            cout<< temp->data <<" ";
            temp = temp->next;
         }
        cout<<endl;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        while(temp != NULL){
            cout<< temp->data <<" ";
            temp = temp->prev;
        }
        cout<<endl;
    }
}
int main()
{
    head = NULL;
    int x,n;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> x;
        insert(x);
    }
    print();
    return 0;
}
