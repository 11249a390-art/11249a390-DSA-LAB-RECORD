**4.Queue operations using Array:**

*Aim:*
To implement a queue using an array and perform enqueue (insertion) and dequeue (deletion) operations.

*Algorithm:*

Enqueue Operation:
1.Check if the queue is full (rear == SIZE-1). If yes, display "Queue Overflow".
2.If the queue is empty (front == -1), set front = 0.
3.Increment rear by 1.
4.Insert the item at queue[rear].
5.Display "Item inserted successfully".

Dequeue Operation:
1.Check if the queue is empty (front == -1). If yes, display "Queue Underflow".
2.Store queue[front] in a variable item.
3.If front == rear, set front = rear = -1 (queue becomes empty).
4.Else, increment front by 1.
5.Display "Deleted item: item".

*Program:*
#include <stdio.h>

#define SIZE 5               // Maximum size of the queue

int queue[SIZE];             // Array to store queue elements
int front = -1, rear = -1;   // Front and rear pointers

// Function to insert an element into the queue
void enqueue(int item) {
    // Check if queue is full
    if (rear == SIZE - 1) {
        printf("Queue overflow!\n");
        return;
    }

    // If queue is empty, set front to 0
    if (front == -1)
        front = 0;

    rear++;                  // Move rear forward
    queue[rear] = item;      // Insert the item
    printf("Item inserted Successfully: %d\n", item);
}

// Function to delete an element from the queue
void dequeue() {
    int item;

    // Check if queue is empty
    if (front == -1) {
        printf("Queue underflow!\n");
        return;
    }

    item = queue[front];     // Get the front element

    // If only one element was left, reset queue
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;             // Move front forward
    }

    printf("Deleted item: %d\n", item);
}

int main() {
    enqueue(10);   // Insert elements
    enqueue(20);
    enqueue(30);
    enqueue(40);

    dequeue();     // Remove two elements
    dequeue();

    return 0;
}


*Output:*
Item inserted Successfully: 10
Item inserted Successfully: 20
Item inserted Successfully: 30
Item inserted Successfully: 40
Deleted item: 10
Deleted item: 20


*Result:*
The program successfully inserts 4 elements into the queue and deletes 2 elements from the front, maintaining the FIFO (First In First Out) principle of a queue.
