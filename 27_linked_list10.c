/*  Doubly Circular Linked List - deletion at the beginning:*/
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

void deleteBeginning(struct Node **head)
{
    if (*head == NULL)
    {
        printf("Doubly Circular linked list is empty. Nothing to delete.\n");
        return;
    }
    struct Node *temp = *head;
    if ((*head)->next == *head)
    {
        free(temp);
        *head = NULL;
    }
    else
    {
        struct Node *last = (*head)->prev;
        *head = (*head)->next;
        last->next = *head;
        (*head)->prev = last;
        free(temp);
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
            newNode->next = newNode;
            newNode->prev = newNode;
            head = newNode;
        }
        else
        {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next = newNode;
            head->prev = newNode;
            head = newNode;
        }
    }

    printf("Doubly Circular linked list before deletion: ");
    display(head);

    // Deleting the first element
    deleteBeginning(&head);

    printf("Doubly Circular linked list after deletion: ");
    display(head);

    return 0;
}
