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
void insertEnd(struct Node**head,int value){
    struct Node*newnode =createNode(value);

    if(*head ==NULL){
        *head = newnode;
        newnode->next = *head;
    }
    else{
        struct Node*tmp =*head;

        while(tmp->next !=*head){
            tmp = tmp->next;
        }
        tmp->next = newnode ;
        newnode->next =*head;
    }
}
void deleteLast(struct Node**head){
    if(*head ==NULL){
        printf("list is empty\n");
        return;
    }
   
    struct Node *tmp = *head ;
    if(tmp->next == *head){
        free(tmp);
        *head = NULL;
        return ;
    }

    struct Node*prev = NULL;
    while(tmp->next != *head){
        prev = tmp;
        tmp = tmp->next;
    }
   prev->next = *head;
   free(tmp);
    
}

void printList(struct Node*head){
    if(head == NULL){
        printf("List is empty\n");
    }

    struct Node*tmp =head;
    int flag =0;

    while(tmp !=head|| flag ==0 ){
        flag =1;
        printf("%d->",tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n\n");
}
int main(){

    struct Node*head = NULL;
    int n,val;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        insertEnd(&head,val);
    }

    printf("Circular Linked list before Deletion: ");
    printList(head);

    deleteLast(&head);
    printf("Circular Linked list After Deletion: ");
    printList(head);

    return 0;
}