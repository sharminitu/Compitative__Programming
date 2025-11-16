#include <stdio.h>
#include <stdlib.h>

// Node Structure
struct Node
{
    int data;
    struct Node *next;
};

// Create Node
struct Node *createNode(int value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

// Insert at Beginning
void insertBeginning(struct Node **head, int value)
{
    struct Node *newnode = createNode(value);
    newnode->next = *head;
    *head = newnode;
}

// Insert at End
void insertEnd(struct Node **head, int value)
{
    struct Node *newnode = createNode(value);

    if (*head == NULL)
    {
        *head = newnode;
        return;
    }

    struct Node *tmp = *head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

// Insert at Specific Position
void insertAtPosition(struct Node **head, int value, int position)
{
    struct Node *newnode = createNode(value);

    if (position == 1)
    { // একদম শুরুতে
        newnode->next = *head;
        *head = newnode;
        return;
    }

    struct Node *tmp = *head;
    for (int i = 1; tmp != NULL && i < position - 1; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        printf("Invalid Position!\n");
        free(newnode);
        return;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
}

// Delete a Node by Value
void deleteNode(struct Node **head, int value)
{
    struct Node *tmp = *head;
    struct Node *prev = NULL;

    if (tmp != NULL && tmp->data == value)
    { // যদি head এ থাকে
        *head = tmp->next;
        free(tmp);
        return;
    }

    while (tmp != NULL && tmp->data != value)
    {
        prev = tmp;
        tmp = tmp->next;
    }

    if (tmp == NULL)
        return; // value না পেলে return

    prev->next = tmp->next;
    free(tmp);
}

// Search a Node by Value
int searchNode(struct Node *head, int value)
{
    struct Node *tmp = head;
    int pos = 1;

    while (tmp != NULL)
    {
        if (tmp->data == value)
        {
            return pos; // পাওয়া গেলে পজিশন return
        }
        tmp = tmp->next;
        pos++;
    }
    return -1; // না পেলে -1
}

// Print the Linked List
void printList(struct Node *head)
{
    struct Node *tmp = head;
    while (tmp != NULL)
    {
        printf("%d -> ", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

// Main Function
int main()
{
    struct Node *head = NULL;

    insertBeginning(&head, 10); // 10 শুরুতে
    insertEnd(&head, 20);       // 20 শেষে
    insertEnd(&head, 30);       // 30 শেষে
    insertBeginning(&head, 5);  // 5 শুরুতে

    printf("After Insertion : ");
    printList(head);

    deleteNode(&head, 20); // 20 ডিলিট
    printf("After Deletion : ");
    printList(head);

    // Search
    int pos = searchNode(head, 30);
    if (pos != -1)
        printf("Found 30 at position %d\n", pos);
    else
        printf("30 Not Found!\n");

    // Insert at position
    insertAtPosition(&head, 15, 3); // 3rd position এ 15 বসাও
    printf("After Insert at Position : ");
    printList(head);

    return 0;
}
