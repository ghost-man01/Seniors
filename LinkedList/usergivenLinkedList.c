#include<stdio.h>

int creating(int n);
struct node {
    int data;
    struct node *next;
};
struct node *start=NULL;
int main(){

    int n;
    printf("Linked List Size: ");
    scanf("%d", &n);
    // Creating first node
    start = (struct node*)malloc(n*sizeof(struct node));
    if(start == NULL)
    printf("Node is not created");
    else
    creating(n);

}

int creating(int n){
    int data;
    if (start == NULL)
    start = p;
    else{
        p->next = start;
        start = p;
    }
    }

    


}