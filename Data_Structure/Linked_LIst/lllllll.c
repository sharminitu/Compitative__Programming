#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int num;
    struct Node *ptr; // ঠিকভাবে নোডের address রাখতে
};

// Function to create a new node
struct Node *createNode(int value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newnode->num = value;
    newnode->ptr = NULL;
    return newnode;
}

int main()
{
    struct Node *first = NULL;
    struct Node *temp = NULL;
    struct Node *head = NULL;
    int count = 0;
    int choice = 1;
    int value;

    while (choice)
    {
        printf("Enter a data element to insert into the Linked List: ");
        scanf("%d", &value);

        head = createNode(value);

        if (first != NULL)
        {
            temp->ptr = head; // last node points to new node
            temp = head;      // update temp
        }
        else
        {
            first = temp = head; // first node
        }

        printf("Do you want to continue (0 to exit, 1 to continue)? ");
        scanf("%d", &choice);
    }

    temp->ptr = NULL; // last node points to NULL

    // Print the Linked List
    printf("\nStatus of the linked list:\n");
    temp = first;
    while (temp != NULL)
    {
        printf("[%p] [%d] -> ", (void *)temp, temp->num);
        count++;
        temp = temp->ptr;
    }
    printf("NULL\n");
    printf("Number of nodes in the list = %d\n", count);

    return 0;
}
