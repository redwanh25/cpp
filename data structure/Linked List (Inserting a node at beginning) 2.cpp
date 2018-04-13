#include<iostream>
using namespace std;

struct node
{
    int data;
    node* link;
};

node* inser_t(node* head, int x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> link = head;
    head = temp;
    return head;
}

void print(node* head)
{
    while(head != NULL){
        cout<< head ->data <<" ";
       head = head -> link;
    }
    cout<<endl;
}

int main()
{
    node* head = NULL;
    int n, x;
    cin>> n ;
    for(int i=1; i<=n; i++){
        cin>> x;
        head = inser_t(head, x);
        print(head);
    }
    return 0;
}
