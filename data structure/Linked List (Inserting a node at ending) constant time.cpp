#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
}*head = NULL, *point = NULL;

void insert(int x){
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = NULL;

/// O(n)
//    if(head == NULL){
//        temp -> next = head;
//        head = temp;
//    }
//    else{
//        struct node* temp1 = head;
//        while(temp1 -> next != NULL){
//            temp1 = temp1 -> next;
//        }
//        temp1 -> next = temp;
//    }

/// O(1)
    if(head == NULL && point == NULL){
        head = temp;
        point = temp;
    }
    else{
        point -> next = temp;
        point = temp;
    }
}

void print(){
    struct node* temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main(){
    int x, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        insert(x);
        print();
    }
    return 0;
}
