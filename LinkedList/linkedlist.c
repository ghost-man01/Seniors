#include <stdio.h>

typedef struct 
{
    int data;
    struct Node *next;
}Node;
Node *p = NULL;


int main()
{
    int n;
    Node* tmp;
    printf("Enter number of Linked List:");
    // scanf("%d", &n);

    p = (struct Node*)malloc(sizeof(Node));
    p -> data = 1;
    p -> next = NULL;
    tmp->data = 3;
    tmp->next = NULL;
    p->next = tmp;

}