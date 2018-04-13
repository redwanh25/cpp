#include<iostream>
using namespace std;

struct node{
    char data;
    node* left;
    node* right;
};

node* newnode(char x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}

node* insert(node* root, char x)
{
    if(root == NULL){
        root = newnode(x);
        return root;
    }
    else if(x <= root -> data){
        root -> left = insert(root -> left, x);
    }
    else if(x > root -> data){
        root -> right = insert(root -> right, x);
    }
    return root;
}

void pre_order(node* root)
{
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    pre_order(root -> left);
    pre_order(root -> right);
}

void in_order(node* root)
{
    if(root == NULL){
        return;
    }
    in_order(root -> left);
    cout << root -> data << " ";
    in_order(root -> right);
}

void post_order(node* root)
{
    if(root == NULL){
        return;
    }
    post_order(root -> left);
    post_order(root -> right);
    cout << root -> data << " ";
}

int main()
{
    node* root = NULL;
    root = insert(root, 'F');
    root = insert(root, 'D');
    root = insert(root, 'J');
    root = insert(root, 'B');
    root = insert(root, 'E');
    root = insert(root, 'G');
    root = insert(root, 'K');
    root = insert(root, 'A');
    root = insert(root, 'C');
    root = insert(root, 'I');
    root = insert(root, 'H');
    pre_order(root);
    cout << endl;
    in_order(root);
    cout << endl;
    post_order(root);
    cout << endl;
    return 0;
}
