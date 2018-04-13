#include<bits/stdc++.h>
using namespace std;

struct node{
    node* left;
    int data;
    node* right;
};

node* newnode(int x)
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

bool search(node* root, int x)
{
    if(root == NULL)
        return false;
    else if(x == root -> data)
        return true;
    else if(x <= root -> data)
        return search(root -> left, x);
    else
        return search(root -> right, x);
}

int main()
{
    node* root = NULL;
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 9);
    root = insert(root, 1);
    root = insert(root, 13);
    root = insert(root, 2);
    root = insert(root, 6);
    if(search(root, 13)){
        cout << "found" << endl;
    }
    else cout << "not found" << endl;
    return 0;
}
