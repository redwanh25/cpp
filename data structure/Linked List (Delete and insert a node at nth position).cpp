#include<iostream>
using namespace std;

struct node
{
    int data;
    node* link;
};
node* head;

void inser_t(int x, int n)
{
    node* temp1 = new node();
    temp1->data = x;
    temp1->link = NULL;
    if(n==1){
        temp1->link = head;
        head = temp1;
        return;
    }
    node* temp2 = head;
    for(int i=1; i<=n-2; i++){
        temp2 = temp2->link;
    }
    temp1 -> link = temp2 -> link;
    temp2->link = temp1;
}

void delet_e(int n)
{
    node* temp = head;
    for(int i=0; i<n-2; i++){
        temp = temp->link;
    }
    node* temp1 = temp->link;
    temp->link = temp1->link;
    delete temp1;
}

void print()
{
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> link;
    }
    cout<<endl;
}

int main()
{
    head = NULL;
    int x,n,k,y;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x>>y;
        inser_t(x,y);
        print();
    }
    cin>>k;
    delet_e(k);
    print();
    return 0;
}
