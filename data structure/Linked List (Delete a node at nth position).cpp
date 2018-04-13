#include<iostream>
using namespace std;

struct node
{
    int data;
    node* link;
};
node* head;

void inser_t(int x, int i)
{
    node* temp1 = new node();
    temp1 -> data = x;
    temp1 -> link = NULL;
    if(i == 1)
        head = temp1;
    else{
        node* temp2 = head;
        for(int j=0; j<i-2; j++){
            temp2 = temp2 -> link;
        }
        temp2 -> link = temp1;
    }
}

void delet_e(int pos)
{
    node* temp = head;
    if(pos == 1){
        head = temp -> link;
        delete temp;
        return;
    }
    for(int i=0; i<pos-2; i++){
        temp = temp -> link;
    }
    node* temp1 = temp -> link;
    temp -> link = temp1 -> link;
    delete temp1;
}

void print()
{
    node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> link;
    }
    cout<<endl;
}

int main()
{
    head = NULL;
    int n, x, pos;
    cin>> n;
    for(int i=1; i<=n; i++){
        cin>> x;
        inser_t(x, i);
        print();
    }
    cin>> pos;
    delet_e(pos);
    print();
    return 0;
}

