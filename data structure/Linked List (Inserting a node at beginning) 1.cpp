#include<iostream>
using namespace std;

struct node
{
    int data;
    node* link;
};
node* head;     /// global a declare kora

void inser_t(int x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> link = head;
    head = temp;
}

void print()
{
    node* temp = head;
    while(temp != NULL){
        cout<< temp ->data <<" ";
       temp = temp -> link;
    }
    cout<<endl;
}

int main()
{
    head = NULL;
    int n, x;
    cin>> n ;
    for(int i=1; i<=n; i++){
        cin>> x;
        inser_t(x);
        print();
    }
    return 0;
}
