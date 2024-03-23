/*  Circular Linked List - Deletion from the beginning:*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("Circular linked list is empty\n");
        return;
    }
    struct Node *current = head;
    do
    {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}
void deleteBeginningCircular(struct Node **head)
{
    if (*head == NULL)
    {
        printf("Circular linked list is empty. Nothing to delete.\n");
        return;
    }
    struct Node *temp = *head;
    while (temp->next != *head)
    {
        temp = temp->next;
    }
    if (temp == *head)
    {
        free(temp);
        *head = NULL;
    }
    else
    {
        struct Node *toDelete = *head;
        *head = (*head)->next;
        temp->next = *head;
        free(toDelete);
    }
}
int main()
{
    struct Node *head = NULL;
    int n, data;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        if (head == NULL)
        {
            head = newNode;
            newNode->next = newNode;
        }
        else
        {
            newNode->next = head->next;
            head->next = newNode;
            head = newNode;
        }
    }
    printf("Circular linked list before deletion: ");
    display(head);
    // Deleting the first element
    deleteBeginningCircular(&head);
    printf("Circular linked list after deletion: ");
    display(head);
    return 0;
}
