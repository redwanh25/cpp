#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    node* link;
};
node* head;

void inser_t(int x, int n)
{
    node* temp1 =(node*) malloc(sizeof(node));   /// new node();
    temp1 -> data = x;
    temp1 -> link = NULL;
    if(n == 1){
        temp1 -> link = head;
        head = temp1;
        return;
    }
    node* temp2 = head;
    for(int i=1; i<=n-2; i++){
        temp2 = temp2 -> link;
    }
    temp1 -> link = temp2 -> link;
    temp2 -> link = temp1;
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
    int n,p,x;
    head = NULL;
    cin>>p;
    for(int i=0; i<p; i++){
        cin>> x >> n;
        inser_t(x,n);
        print();
    }
    return 0;
}
