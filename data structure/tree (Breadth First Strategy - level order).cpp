#include<iostream>
#include<queue>
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

void BFS(node* root)
{
    queue <node*> temp;
    temp.push(root);
    while(!temp.empty()){
        node* next = temp.front();
        cout << next -> data << " ";

        if(next -> left != NULL)
            temp.push(next -> left);

        if(next -> right != NULL)
            temp.push(next -> right);

        temp.pop();
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
