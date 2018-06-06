#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    int data;
    node* link;
};
node* head;     /// global a declare kora

void inser_t(int x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> link = head;
    head = temp;
}

void print()
{
    node *temp = head;
    printf ("    head");
    while (temp != NULL)
    {
        printf ("%23d    ", temp);
        temp = temp -> link;
    }
    printf ("\n");
    printf ("| %7d |  --->  ", head);
    node *temp1=head;
    while (temp1 != NULL)
    {
        printf ("| %2d | %8d |",temp1 -> data, temp1->link);
        printf("   --->   ");
        temp1 = temp1 -> link;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    int n, x;
    cin>> n ;
    for(int i=1; i<=n; i++){
        cin>> x;
        inser_t(x);
        print();
    }
    return 0;
}
