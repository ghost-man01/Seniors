#include<stdio.h>
#include<stdlib.h>

void Creation();
void Traverse();
void Append();
void Begening();
// void ShiftSpecificNode();
// void DeleteSpecificNode();
// void Delete();
// void DeleteByData();

struct node{
    int data;
    struct node* next;
};
struct node* head, *p, *temp;

int main(){

    int choice;
    printf("1. Creation\n2. Traverse\n3. Begening\n4. ShiftSpecificNode\n5. DeleteSpecificNode\n6. Delete\n7. DeleteByData\n8. Append\n9. Exit\n");
    do{
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                Creation();
                break;
            case 2:
                Traverse();
                break;
            
            case 3:
                Begening();
                break;
            // case 4:
            //     ShiftSpecificNode();
            
            // case 5:
            //     DeleteSpecificNode();
            
            // case 6:
            //     Delete();

            // case 7:
            //     DeleteByData();
            
            case 8:
                Append();
                break;
            case 9:
                exit(0);

            default:
                main();
        }
    }while(choice!=9);
}

void Creation(){
    int n, i, value;
    printf("Number of Nodes: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &value);
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data=value;
        temp->next=NULL;
        if(head==NULL)
        head=temp;
        else{
            p = head;
            while(p->next!=NULL)
            p=p->next;
            p->next=temp;
        }
    }
}

void Traverse(){

    while(head!=NULL){
        printf("%d", head->data);
        head = head->next;
    }
}


void Append(){
    int value;
    struct node* temp = malloc(sizeof(struct node));
    printf("Enter Item: ");
    scanf("%d", &value);
    temp->data = value;
    temp->next = NULL;
    if(head == NULL)
    head = temp;
    else{

        p = head;
        while (p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        
    }
}


void Begening(){

    int value;
    struct node* temp = malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &value);
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    head=temp;
    else{
        p = head;
        temp->next=p;
        p=temp;
    }
}

void ShiftSpecificNode(){
    int value;
    printf("Enter Value of Node: ");
    scanf("%d", value);
    p = head;
    if(p==NULL)
    printf("Empty List");
    else{
        while(p->next!=NULL){
            if(temp->data==value){
                printf("Item Found!\n");
            }
        }
    }
}