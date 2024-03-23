/*  Doubly Circular Linked List - Insertion at the beginning:*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("Doubly Circular linked list is empty\n");
        return;
    }
    struct Node *current = head;
    do
    {
        printf("%d <-> ", current->data);
        current = current->next;
    } while (current->next != head);
    printf("%d\n", current->data);
}
void insertBeginning(struct Node **head, int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    if (*head == NULL)
    {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
    }
    else
    {
        struct Node *last = (*head)->prev;
        newNode->next = *head;
        newNode->prev = last;
        (*head)->prev = newNode;
        last->next = newNode;
        *head = newNode;
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
        insertBeginning(&head, data);
    }
    printf("Doubly Circular linked list: ");
    display(head);
    return 0;
}
