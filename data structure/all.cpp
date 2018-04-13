#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head, *point;

void Insert_At_Begining(int x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> next = head;
    head = temp;
}

void Insert_At_Ending(int x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
        point = temp;
        return;
    }
    point -> next = temp;
    point = temp;
}

void Insert_At_Nth_Position(int x, int n)
{
    node* temp = new node();
    temp -> data = x;
    temp -> next = NULL;
    if(n == 0){
        temp -> next = head;
        head = temp;
        return;
    }
    node* temp1 = head;
    for(int i = 0; i < n-1; i++){
        temp1 = temp1 -> next;
    }
    temp -> next = temp1 -> next;
    temp1 -> next = temp;
}

void Delete_At_Nth_Position(int n)
{
    node* temp = head;
    for(int i = 0; i < n-1; i++){
        temp = temp -> next;
    }
    node* temp1 = temp -> next;
    temp -> next = temp -> next -> next;
    delete temp1;
}

void Delete_Value(int x)
{
    bool ck = false;
    node* temp = head;
    while(temp -> next != NULL){
        if(temp -> next -> data == x){
            ck = true;
            break;
        }
        temp = temp -> next;
    }
    if(ck){
        node* temp1 = temp -> next;
        temp -> next = temp -> next -> next;
        delete temp1;
    }
    else{
        if(head -> data == x){
            node* temp2 = head;
            head = head -> next;
            delete temp2;
        }
        else{
            cout << "sorry not found" << endl;
        }
    }
}

void print()
{
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    int n, x, z, d;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
      Insert_At_Begining(x);
//        Insert_At_Ending(x);
//      cin >> x >> z;
//      Insert_At_Nth_position(x, z);
        print();
    }
    cin >> d;
//  Delete_At_Nth_Position(d);
    Delete_Value(d);
    print();
    return 0;
}

