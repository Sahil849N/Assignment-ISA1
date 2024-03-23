/*  Dequeue Operation:*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue
{
    int items[MAX_SIZE];
    int front;
    int rear;
}; 
void enqueue(struct Queue *q, int value)
{
    if (q->rear == MAX_SIZE - 1)
    {
        printf("Queue is full\n");
        return;
    }
    if (q->front == -1)
    {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = value;
    printf("Enqueued %d successfully.\n", value);
}
int dequeue(struct Queue *q)
{
    if (q->front == -1)
    {
        printf("Queue is empty\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front >= q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return value;
}
void display(struct Queue *q)
{
    if (q->front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}
int main()
{
    struct Queue q;
    q.front = -1;
    q.rear = -1;
    // Insert elements into the queue
    int n, value;
    printf("Enter the number of elements to enqueue: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        enqueue(&q, value);
    }
    // Display the queue
    display(&q);
    // Dequeue elements from the queue
    printf("Dequeued elements: ");
    while (q.front != -1)
    {
        int dequeuedValue = dequeue(&q);
        printf("%d ", dequeuedValue);
    }
    printf("\n");
    return 0;
}
