/*  Display Operation:*/
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
    int n, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n > MAX_SIZE)
    {
        printf("Error: Number of elements exceeds maximum size.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        enqueue(&q, value);
    }
    // Display the queue
    display(&q);
    return 0;
}
