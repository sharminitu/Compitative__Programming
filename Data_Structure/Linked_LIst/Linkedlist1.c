#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};

struct Node*createNode(int value){
    struct Node*newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

void insertBeginning(struct Node**head,int value){
    struct Node *newnode =createNode(value);
    newnode->next = *head;
    *head =newnode;
}
void insertEnd(struct Node**head ,int value){
    struct Node*newnode = createNode(value);

    if(*head == NULL){
        *head = newnode;
        return;
    }

    struct Node*tmp = *head;

    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp ->next= newnode;
    
}

void deleteNode(struct Node **head,int value){
    struct Node*tmp = *head;
    struct Node*prev =NULL;

    if(tmp!=NULL&&tmp->data==value){
        *head = tmp->next;
        free(tmp);
        return;
    }

    while(tmp !=NULL&&tmp->data!=value){
        prev =tmp;
        tmp = tmp->next;
    }

    if(tmp ==NULL){
        return;
    }

    prev->next =tmp->next;
    free(tmp);

}

void printList(struct Node*head ){
    struct Node* tmp =head ;

    while(tmp!=NULL){
        printf("%d ->",tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}
int main(){

    struct Node*head = NULL;

    insertBeginning(&head, 10); // Insert 10 at beginning
    insertEnd(&head, 20);       // Insert 20 at end
    insertEnd(&head, 30);       // Insert 30 at end
    insertBeginning(&head, 5);  // Insert 5 at beginning

    printf("After Insertion :");

    printList(head);

    deleteNode(&head,20);

    printList(head);


    
}