single linked list:
Aim:
Implement a menu-driven singly linked list in C that supports:
 Insert at beginning
 Insert at end
 Insert at position
 Delete by value
 Display list

Algorithm:

1.Define a Node structure with data and next.
2.For insertion:
  Beginning: create node → point its next to head → update head.
  End: traverse to last node → set last->next to new node.
  Position: traverse to node at position-1 → insert node by adjusting pointers.
3.For deletion by value:
  If head contains value, remove head.
  Else traverse to find node whose next node contains value and unlink it.
4.Display by traversing from head printing nodes.

Program:

#include <stdio.h>
#include <stdlib.h>

// Structure for a node in a singly linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node with given data
struct Node *CreateNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    
    // Check if memory allocation failed
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    newNode->data = data;     // Assign value
    newNode->next = NULL;     // Initialize next pointer
    return newNode;
}

// Insert a node at the beginning of the list
void InsertAtBeginning(struct Node **head, int data) {
    struct Node *newNode = CreateNode(data);
    if (!newNode) return;

    newNode->next = *head;    // Link current head after new node
    *head = newNode;          // Make new node the head

    printf("Inserted %d at beginning.\n", data);
}

// Insert a node at the end of the list
void InsertAtEnd(struct Node **head, int data) {
    struct Node *newNode = CreateNode(data);
    if (!newNode) return;

    // If list is empty, new node becomes the head
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *temp = *head;

        // Traverse to last node
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;  // Link new node at the end
    }

    printf("Inserted %d at end.\n", data);
}

// Insert a node at a specific position
void InsertAtPosition(struct Node **head, int data, int pos) {
    // Invalid position
    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }

    // If inserting at beginning
    if (pos == 1) {
        InsertAtBeginning(head, data);
        return;
    }

    struct Node *prev = *head;

    // Traverse to the (pos-1)th node
    for (int i = 1; i < pos - 1 && prev != NULL; ++i)
        prev = prev->next;

    // If position is out of range
    if (prev == NULL) {
        printf("Position out of range!\n");
        return;
    }

    struct Node *newNode = CreateNode(data);
    if (!newNode) return;

    newNode->next = prev->next; // Link new node to next node
    prev->next = newNode;       // Link previous node to new node

    printf("Inserted %d at position %d.\n", data, pos);
}

// Delete a node by value
void DeleteNode(struct Node **head, int value) {
    // If list is empty
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node *temp = *head;

    // If head node contains the value
    if (temp->data == value) {
        *head = temp->next;  // Move head forward
        free(temp);          // Delete old head
        printf("Deleted %d from list.\n", value);
        return;
    }

    struct Node *prev = *head;

    // Search for the node to delete
    while (prev->next != NULL && prev->next->data != value)
        prev = prev->next;

    // If value not found
    if (prev->next == NULL) {
        printf("Element %d not found.\n", value);
        return;
    }

    temp = prev->next;
    prev->next = temp->next;  // Remove node from list
    free(temp);               // Free memory

    printf("Deleted %d from list.\n", value);
}

// Display all nodes in the list
void DisplayList(struct Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    for (struct Node *p = head; p != NULL; p = p->next)
        printf("%d -> ", p->data);

    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;  // Start with an empty list
    int choice, data, pos;

    while (1) {
        // Menu
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n4. Delete by Value\n5. Display List\n6. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) break;

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                InsertAtBeginning(&head, data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                InsertAtEnd(&head, data);
                break;

            case 3:
                printf("Enter data and position: ");
                scanf("%d %d", &data, &pos);
                InsertAtPosition(&head, data, pos);
                break;

            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &data);
                DeleteNode(&head, data);
                break;

            case 5:
                DisplayList(head);
                break;

            case 6:
                printf("Exiting...\n");

                // Free all allocated memory before exiting
                while (head) {
                    struct Node *t = head;
                    head = head->next;
                    free(t);
                }
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}


Sample Output:
--- Singly Linked List Menu ---
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete by Value
5. Display List
6. Exit
Enter choice: 2
Enter data: 10
Inserted 10 at end.

Enter choice: 1
Enter data: 5
Inserted 5 at beginning.

Enter choice: 2
Enter data: 20
Inserted 20 at end.

Enter choice: 3
Enter data and position: 15 3
Inserted 15 at position 3.

Enter choice: 5
Linked List: 5 -> 10 -> 15 -> 20 -> NULL

Enter choice: 4
Enter value to delete: 10
Deleted 10 from list.

Enter choice: 5
Linked List: 5 -> 15 -> 20 -> NULL

Enter choice: 6
Exiting...

Result:
Working singly linked list program that performs insertions, deletion by value, and displays the list. Memory is freed at exit. You can extend it (search, reverse, sort) similarly.
