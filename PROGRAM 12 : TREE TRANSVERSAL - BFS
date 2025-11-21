Aim of the Program

To implement a Binary Search Tree (BST) in C and perform Level Order Traversal (Breadth-First Traversal) using a queue.

Algorithm

1. Node Creation

Allocate memory for a new node using malloc.

Assign the input value to the node.

Set left and right child pointers to NULL.

2. Insertion into BST

If the tree is empty, the first node becomes the root.

If the value is smaller than the root’s data, insert it into the left subtree.

If the value is greater than or equal to the root’s data, insert it into the right subtree.

Return the updated root.

3. Queue Implementation for Level Order Traversal

Use a global array queue to store pointers to nodes.

Maintain front and rear pointers to manage the queue.

Enqueue the root node.

While the queue is not empty:

Dequeue a node.

Print its value.

Enqueue its left child if it exists.

Enqueue its right child if it exists.

4. Level Order Traversal

Visit nodes level by level from top to bottom using the queue.



**PROGRAM** :

  #include <stdio.h>
#include <stdlib.h>

// Global variables for queue to perform Level Order Traversal
struct Node **queue;       // Queue to store node pointers
int front = -1, rear = -1; // Front and rear indices of queue
int MAX;                    // Maximum size of the queue (number of elements)

// Structure for tree node
// Each node contains data and pointers to left and right children
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node with given value
struct Node *createNode(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node)); // Allocate memory
    newNode->data = value;        // Assign value
    newNode->left = newNode->right = NULL; // Initialize left and right child to NULL
    return newNode;
}

// Function to insert a value into BST and return updated root
struct Node *insert(struct Node *root, int value) {
    if (root == NULL) {  // If tree is empty, create root node
        return createNode(value);
    }

    if (value < root->data)       // If value is smaller, insert in left subtree
        root->left = insert(root->left, value);
    else                          // If value is greater or equal, insert in right subtree
        root->right = insert(root->right, value);

    return root;                  // Return updated root
}

// Function to insert a node into the queue
void enqueue(struct Node *temp) {
    if (rear == MAX - 1)          // Check for queue overflow
        return;                   // Do nothing if queue is full
    if (front == -1)              // If queue is empty, set front to 0
        front = 0;
    queue[++rear] = temp;         // Increment rear and insert node
}

// Function to remove a node from the queue
struct Node *dequeue() {
    if (front == -1 || front > rear) // Check for empty queue
        return NULL;
    return queue[front++];           // Return front node and increment front
}

// Function for Level Order Traversal (Breadth-First Search)
void levelOrder(struct Node *root) {
    if (root == NULL)               // If tree is empty, return
        return;

    enqueue(root);                  // Start by enqueuing root node

    while (front <= rear) {         // Continue until queue is empty
        struct Node *current = dequeue(); // Remove node from front
        printf("%d ", current->data);    // Print node's data

        if (current->left != NULL)       // If left child exists, enqueue it
            enqueue(current->left);
        if (current->right != NULL)      // If right child exists, enqueue it
            enqueue(current->right);
    }
}

int main() {
    int value;
    struct Node *root = NULL;      // Initialize empty BST

    printf("Enter number of elements: ");
    scanf("%d", &MAX);             // Read number of elements

    queue = (struct Node **)malloc(MAX * sizeof(struct Node *)); // Allocate memory for queue

    printf("Enter %d values:\n", MAX);
    for (int i = 0; i < MAX; i++) {
        scanf("%d", &value);       // Read each value
        root = insert(root, value);// Insert into BST
    }

    printf("\nLevel Order Traversal: ");
    levelOrder(root);              // Perform Level Order Traversal

    return 0;
}


**Sample Input** :

Enter number of elements: 7

Enter 7 values:

50 30 70 20 40 60 80

**Sample Output** :

Level Order Traversal: 50 30 70 20 40 60 80

**Final Result ** :

The program successfully constructs a Binary Search Tree from user input.

Level Order Traversal prints nodes level by level, from root to leaves.

The output demonstrates a Breadth-First Search (BFS) traversal of the BST.
