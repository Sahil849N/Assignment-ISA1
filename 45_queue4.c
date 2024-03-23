/*  Sort queue*/
#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the queue
struct Node {
    int data;
    struct Node* next;
};

// Structure to represent a queue
struct Queue {
    struct Node *front, *rear;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to create an empty queue
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// Function to enqueue an item by reading inputs
void enqueue(struct Queue* q) {
    int num_elements;

    printf("Enter the number of elements to enqueue: ");
    scanf("%d", &num_elements);

    printf("Enter %d elements:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        int element;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &element);

        struct Node* temp = newNode(element);

        if (q->rear == NULL) {
            q->front = q->rear = temp;
        } else {
            q->rear->next = temp;
            q->rear = temp;
        }
    }
}

// Function to dequeue an item
int dequeue(struct Queue* q) {
    if (q->front == NULL)
        return -1;

    struct Node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
    return data;
}

// Function to sort the queue using bubble sort
void sortQueue(struct Queue* q) {
    int swapped, i;
    struct Node *ptr1, *lptr = NULL;

    // Checking for empty queue
    if (q->front == NULL)
        return;

    do {
        swapped = 0;
        ptr1 = q->front;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

// Function to print elements of the queue
void printQueue(struct Queue* q) {
    struct Node* temp = q->front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Queue* q = createQueue();
    enqueue(q);

    printf("Queue before sorting: ");
    printQueue(q);

    sortQueue(q);

    printf("Queue after sorting: ");
    printQueue(q);

    return 0;
}
