#include<iostream>
using namespace std;

struct node
{
    node* left;
    int data;
    node* right;
};

node* NewNode(int x)
{
    node* temp = new node();
    temp -> left = NULL;
    temp -> data = x;
    temp -> right = NULL;
    return temp;
}

node* insert(node* root, int x)
{
    if(root == NULL){
        root = NewNode(x);
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

node* findout(node* root, int x)
{
    if(root == NULL){
        return NULL;
    }
    else if(x == root -> data){
        return root;
    }
    else if(x < root -> data){
        return findout(root -> left, x);
    }
    else{
        return findout(root -> right, x);
    }
}

node* Min(node* root)
{
    if(root -> left == NULL){
        return root;
    }
    return Min(root -> left);
}

node* inorder_successor(node* root, int x)
{
    node* current = findout(root, x);
    if(current == NULL){
        return NULL;
    }
    /// case 1: two subtree.
    if(current -> right != NULL){
        return Min(current -> right);
    }
    /// case 2: no right subtree.
    else{
        node* ancestor = root;
        node* successor = NULL;
        while(ancestor != current){
            if(current -> data < ancestor -> data){
                successor = ancestor;
                ancestor = ancestor -> left;
            }
            else{
                ancestor = ancestor -> right;
            }
        }
        return successor;
    }
}

int main()
{
    node* root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 6);
    root = insert(root, 11);
    root = insert(root, 20);
    root = insert(root, 17);
    root = insert(root, 16);
    root = insert(root, 25);
    root = insert(root, 27);
    node* temp = inorder_successor(root, 15);
    cout << temp -> data << endl;
    return 0;
}
