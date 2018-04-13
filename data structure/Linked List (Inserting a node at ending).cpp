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
 /*      while(1){
            if(temp2 -> link == NULL)
                break;
            temp2 = temp2 -> link;
        }                                             */
        for(int j=0; j<i-2; j++){
            temp2 = temp2 -> link;
        }
        temp2 -> link = temp1;
    }
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
    int n, x;
    cin>> n;
    for(int i=1; i<=n; i++){
        cin>> x;
        inser_t(x, i);
        print();
    }

    return 0;
}
