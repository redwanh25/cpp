#include<iostream>
using namespace std;

struct node
{
    int data;
    node* link;
};

void inser_t(node** head, int x, int n)
{
    node* temp1 = new node();
    temp1 -> data = x;
    temp1 -> link = NULL;
    if(n == 1){
        temp1 -> link = *head;
        *head = temp1;
        return;
    }
    node* temp2 = *head;
    for(int i=1; i<=n-2; i++){
        temp2 = temp2 -> link;
    }
    temp1 -> link = temp2 -> link;
    temp2 -> link = temp1;
}

void print(node* head)  ///   head = head
{
    while(head != NULL){
        cout<< head -> data <<" ";
        head = head ->link;
    }
    cout<<endl;
}

int main()
{
    int n, x, y;
    node* head = NULL;
    cin>> y;
    for(int i=0; i<y; i++){
        cin>> x >> n;
        inser_t(&head, x, n);
        print(head);
    }
    return 0;
}
