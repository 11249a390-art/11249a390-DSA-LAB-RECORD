
**Aim of the Program ** :

To implement a Binary Search Tree (BST) in C, allowing dynamic insertion of elements and performing Preorder, Inorder, and Postorder traversals.


**Algorithm **

1. Node Creation

Allocate memory for a new node.

Assign the value to data.

Set left and right children to NULL.

2. Insertion into BST

If the tree is empty, the new node becomes the root.

If the value is less than root data, insert into left subtree.

If the value is greater than or equal to root data, insert into right subtree.

Return the root after insertion.

3. Tree Traversals

Preorder: Print root, traverse left subtree, traverse right subtree.

Inorder: Traverse left subtree, print root, traverse right subtree.

Postorder: Traverse left subtree, traverse right subtree, print root.




**PROGRAM **

#include <stdio.h>
#include <stdlib.h>

// Structure for a tree node
struct Node {
    int data;           // Data stored in node
    struct Node *left;  // Pointer to left child
    struct Node *right; // Pointer to right child
};

// Function to create a new node
struct Node *createNode(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL; // Initialize children to NULL
    return newNode;
}

// Function to insert a value into BST
struct Node *insert(struct Node *root, int value) {
    if (root == NULL) {            // If tree is empty, create root
        return createNode(value);
    }

    if (value < root->data)        // If value is smaller, insert in left subtree
        root->left = insert(root->left, value);
    else                           // If value is greater or equal, insert in right subtree
        root->right = insert(root->right, value);

    return root;                   // Return updated root
}

// Preorder traversal: Root -> Left -> Right
void preorder(struct Node *root) {
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Inorder traversal: Left -> Root -> Right
void inorder(struct Node *root) {
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Postorder traversal: Left -> Right -> Root
void postorder(struct Node *root) {
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    int n, value;
    struct Node *root = NULL;  // Initialize empty BST

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value); // Insert dynamically into BST
    }

    printf("Preorder Traversal: ");
    preorder(root);

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
}

**SAMPLE INPUT **

Enter number of elements: 5
Enter 5 values:
50 30 70 20 40

** SAMPLE OUTPUT** :

Preorder Traversal: 50 30 20 40 70 
Inorder Traversal: 20 30 40 50 70 
Postorder Traversal: 20 40 30 70 50 


**Final Result **

1.The program successfully builds a Binary Search Tree from user input.

    Traversals show:

        Preorder: Root is visited first.

       Inorder: Sorted order of elements.

      Postorder: Root is visited last.


