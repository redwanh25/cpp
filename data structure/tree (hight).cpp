#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* insert(node* root, int x)
{
    if(root == NULL){
        node* temp = new node();
        temp -> data = x;
        temp -> left = NULL;
        temp -> right = NULL;
        return temp;
    }
    else if(x <= root -> data){
        root -> left = insert(root -> left, x);
    }
    else{
        root -> right = insert(root -> right, x);
    }
    return root;
}

int hight(node* root)
{
    if(root == NULL){
        return -1;
    }
    int left = hight(root -> left);
    int right = hight(root -> right);
    return max(left, right) + 1;
/// return max(hight(root -> left), hight(root -> right)) + 1;
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
    cout << hight(root) << endl;
    return 0;
}
