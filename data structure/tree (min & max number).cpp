#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

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

int MIN(node* root)     /// root ai function er local variable
{
    if(root == NULL){
        cout << "empty" <<endl;
    }
    else if(root -> left == NULL){
        return root -> data;
    }
    return MIN(root -> left);
}

int MAX(node* root)     /// root ai function er local variable
{
    node* temp = root;
    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return temp -> data;
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

    cout << MIN(root) <<endl;
    cout << MAX(root) <<endl;

    return 0;
}
