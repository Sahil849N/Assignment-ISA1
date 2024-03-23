/*  Reverse queue*/
#include <stdio.h>
#include <stdlib.h>
// Structure to represent a node in the queue
struct Node
{
    int data;
    struct Node *next;
};
// Structure to represent a queue
struct Queue
{
    struct Node *front, *rear;
};
// Function to create a new node
struct Node *newNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
// Function to create an empty queue
struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
// Function to enqueue an item
void enqueue(struct Queue *q, int data)
{
    struct Node *temp = newNode(data);

    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }

    q->rear->next = temp;
    q->rear = temp;
}
// Function to dequeue an item
int dequeue(struct Queue *q)
{
    if (q->front == NULL)
        return -1;

    struct Node *temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
    return data;
}
// Function to reverse the queue
void reverseQueue(struct Queue *q)
{
    struct Node *prev = NULL, *current = q->front, *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    q->rear = q->front;
    q->front = prev;
}
// Function to print elements of the queue
void printQueue(struct Queue *q)
{
    struct Node *temp = q->front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct Queue *q = createQueue();
    int n, ele;
    printf("Enter the number of elements to enqueue\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        enqueue(q, ele);
    }
    printf("Queue before reversing: ");
    printQueue(q);
    reverseQueue(q);
    printf("Queue after reversing: ");
    printQueue(q);
    return 0;
}
