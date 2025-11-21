**AIM** :

To implement Circular Queue operations (Enqueue, Dequeue, Display) using Linked List in C.


**ALGORITHM** :

1. ENQUEUE (Insert)

1. Create a new node.

2. If queue is empty:

front = rear = new node

rear->next = front



3. Else:

rear->next = new node

rear = new node

rear->next = front


2. DEQUEUE (Delete)

1. If queue is empty → print “Queue is empty”.


2. If front == rear:

Remove single node

front = rear = NULL


3. Else:

temp = front

front = front->next

rear->next = front

free temp


3. DISPLAY

1. If empty → print “Queue empty”.


2. Start from front.


3. Traverse until node again becomes front.




 **PROGRAM — Circular Queue Using Linked List**

#include <stdio.h>
#include <stdlib.h>

// Structure for a queue node (Circular Linked List)
struct Node {
    int data;
    struct Node *next;
};

// Front and rear pointers for the circular queue
struct Node *front = NULL;
struct Node *rear = NULL;

// Function to insert an element into the circular queue
void enqueue(int x) {

    // Allocate memory for new node
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = x;
    newNode->next = NULL;

    // If queue is empty
    if (front == NULL) {
        front = rear = newNode;   // First element
        rear->next = front;       // Make it circular
    } 
    else {
        rear->next = newNode;     // Link old rear to new node
        rear = newNode;           // Update rear pointer
        rear->next = front;       // Maintain circular linking
    }

    printf("%d inserted\n", x);
}

// Function to delete an element from the circular queue
void dequeue() {
    // Check for empty queue
    if (front == NULL) {
        printf("Queue Underflow\n");
        return;
    }

    struct Node *temp = front;

    // If only one node is present
    if (front == rear) {
        printf("%d deleted\n", front->data);
        front = rear = NULL;      // Queue becomes empty
    } 
    else {
        printf("%d deleted\n", front->data);
        front = front->next;      // Move front pointer
        rear->next = front;       // Maintain circular link
    }

    free(temp);                   // Free deleted node
}

// Function to display all elements in the circular queue
void display() {
    if (front == NULL) {
        printf("Queue is Empty\n");
        return;
    }

    struct Node *temp = front;
    printf("Circular Queue: ");

    // Print elements until we loop back to front
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);

    printf("\n");
}

int main() {
    int choice, x;

    while (1) {
        // Menu for queue operations
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &x);
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;


** SAMPLE OUTPUT** :

1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter choice: 1
Enter value: 10
10 inserted

Enter choice: 1
Enter value: 20
20 inserted

Enter choice: 1
Enter value: 30
30 inserted

Enter choice: 3
Circular Queue: 10 20 30

Enter choice: 2
10 deleted

Enter choice: 3
Circular Queue: 20 30

**Result** : Thus the implementation of circular operations using Enqueue,Dequeue and Display is complemented.
