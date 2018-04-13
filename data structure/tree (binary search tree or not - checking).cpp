#include <iostream>
#include<climits>
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

bool Search(node* root, int x)
{
    if(root == NULL){
        return false;
    }
    else if(x == root -> data){
        return true;
    }
    else if(x <= root -> data)
        return Search(root -> left, x);
    else
        return Search(root -> right, x);
}

bool check(node* root, int Min, int Max)
{
    if(root == NULL)
        return true;
    if(root -> data > Min && root -> data < Max && check(root -> left, Min, root -> data) && check(root -> right, root -> data, Max))
        return true;
    else
        return false;
}

int main()
{
    node* root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 8);

    if(check(root, INT_MIN, INT_MAX)){
        cout << "BST" << endl;
    }
    else
        cout << "NOT BST" << endl;

    if(Search(root, 1)){
        cout << "found" << endl;
    }
    else
        cout << "not found" << endl;
    return(0);
}
