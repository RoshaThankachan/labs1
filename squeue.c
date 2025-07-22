#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Function to insert an element
void enqueue(int value) {
    if (rear == SIZE - 1)
        printf("Queue is full!\n");
    else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("%d inserted into the queue.\n", value);
    }
}

// Function to delete an element
void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue is empty!\n");
    else {
        printf("%d is removed from the queue.\n", queue[front]);
        front++;
    }
}

// Function to view the front element
void peek() {
    if (front == -1 || front > rear)
        printf("Queue is empty!\n");
    else
        printf("Front element is: %d\n", queue[front]);
}

// Function to display all elements
void display() {
    if (front == -1 || front > rear)
        printf("Queue is empty!\n");
    else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

