#include <stdio.h>
#include <stdlib.h>
#define print(a, b) printf("%d %d\n",a,b)
struct node {
    int data;
    struct node* next;
};
struct node *head = NULL, *point = NULL;

void insert(int x){
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
        point = temp;
    }
    else{
        point -> next = temp;
        point = temp;
    }
}

void printData(struct node* temp){
//    struct node* temp = head;
//    while(temp != NULL){
//        printf("%d ", temp -> data);
//        temp = temp -> next;
//    }
//    printf("\n");

/// normal
    if(temp == NULL){
        return;
    }
    printf("%d ", temp -> data);
    printData(temp -> next);

/// reverse
//    if(temp == NULL){
//        return;
//    }
//    printData(temp -> next);
//    printf("%d ", temp -> data);
}

void reverse(struct node* temp){
    if(temp -> next == NULL){
        head = temp;
        return;
    }
    reverse(temp -> next);
    temp -> next -> next = temp;
    temp -> next = NULL;
    point = temp;
}

int main()
{
    int x, n, i;
    for(i = 0; i < 5; i++){
        scanf("%d", &x);
        insert(x);
        printData(head);
        printf("\n");
    }
    printf("%d\n", head -> data);
//    reverse(head);
//    printData();
//    insert(100);
//    printData();
//    insert(200);
//     printData();
}


