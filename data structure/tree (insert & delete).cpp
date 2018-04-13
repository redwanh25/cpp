#include<iostream>
using namespace std;

struct node{
    node* left;
    char data;
    node* right;
};

node* newnode(char x)
{
    node* temp = new node();
    temp -> left = NULL;
    temp -> data = x;
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
    else{
        root -> right = insert(root -> right, x);
    }
    return root;
}

node* FindMin(node* root)
{
    if(root -> left == NULL){
        return root;
    }
    return FindMin(root -> left);
}

node* Delete(node* root, char x)
{
    if(root == NULL){
        return root;
    }
    else if(x < root -> data){
        root -> left = Delete(root -> left, x);
    }
    else if(x > root -> data){
        root -> right = Delete(root -> right, x);
    }
    else{
        /// Case 1 (for no child):
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            root = NULL;
        }

        /// Case 2 (for one child):
        else if(root -> left == NULL){
            node* temp = root;
            root = root -> right;
            delete temp;
        }
        else if(root -> right == NULL){
            node* temp = root;
            root = root -> left;
            delete temp;
        }

        /// Case 3 (for two children):
        else{
            node* temp = FindMin(root -> right);
            root -> data = temp -> data;
            root -> right = Delete(root -> right, temp -> data);
            delete temp;
        }
    }
    return root;
}

void print(node* root)
{
    if(root == NULL){
       return;
    }
    print(root -> left);
    cout << root -> data << " ";
    print(root -> right);
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
    root = Delete(root, 'J');
    root = Delete(root, 'C');
    root = Delete(root, 'F');
    print(root);

    return 0;
}

/*

        F                F              F                G
       /  \             /  \           /  \             /  \
      D    J           D    K         D    K           D    K
     /\    /\         /\    /        /\    /          /\    /
    B  E  G  K       B  E  G        B  E  G          B  E  I
   /\      \        /\      \      /       \        /       \
  A  C      I      A  C      I    A         I      A         H
           /                /              /
          H                H              H


*/



