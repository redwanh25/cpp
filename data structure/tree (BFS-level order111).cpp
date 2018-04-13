#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node* info, *next;
};

///////////////////////    queue   ////////////////////////////

node* first, *last;

void push(node* root)
{
    node* temp = new node();
    temp -> info = root;
    temp -> next = NULL;
    if(first == NULL && last == NULL){
        first = temp;
        last = temp;
        return;
    }
    last -> next = temp;
    last = temp;
}

bool empty()
{
    if(first == NULL){
        return true;
    }
    else{
        return false;
    }
}

node* front()
{
    return first -> info;
}

void pop()
{
    node* temp = first;
    first = temp -> next;
    delete temp;
}

//////   ////////     /////  /////   ///////////  ////////    ///////

node* newnode(int x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}

node* insert(node* root, int x)
{
    if(root == NULL){
        root = newnode(x);
        return root;
    }
    else if(x <= root -> data){
        root -> left = insert(root -> left, x);
    }
    else{
        root -> right = insert(root -> right, x);
    }
    return root;
}

void BFS(node* root)
{
    first = last = NULL;
    push(root);
    while(!empty()){
        node* temp = front();
        cout << temp -> data << " ";
        if(temp -> left != NULL){
            push(temp -> left);
        }
        if(temp -> right != NULL){
            push(temp -> right);
        }
        pop();
    }
}

int main()
{
    node* root = NULL;
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 98);
    root = insert(root, -5);
    root = insert(root, 13);
    root = insert(root, 2);
    root = insert(root, 6);
    BFS(root);
    return 0;
}

