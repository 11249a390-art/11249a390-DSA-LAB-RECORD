**3.Stack operations using array**

*Aim:*
To implement a stack using an array in C and perform push and pop operations.

*Algorithm:*
1.Start the program.
2.Initialize TOP = -1 and choice = 0.
3.Read the maximum size of the stack MAX.
4.Create an array stack[MAX].
5.Repeat until the user chooses to exit (choice != 3):
 1.Display menu: Push, Pop, Exit.
 2.Read the user’s choice.
 3.If choice is 1 (Push):
   If TOP == MAX-1, display “stack is overflown”.
   Else, input a value, increment TOP, and store the value in stack[TOP].
 4.If choice is 2 (Pop):
   If TOP == -1, display “stack underflow”.
   Else, display stack[TOP] and decrement TOP.
 5.If choice is 3 (Exit):
   Terminate the program.
 6.If invalid choice:
   Display “Incorrect choice”.
6.End.

*Program:*
#include <stdio.h>

int main() {
    int TOP = -1, choice = 0;   // TOP points to the top element of the stack
    int MAX, item;

    // Ask user for the maximum size of the stack
    printf("Enter the stack size: ");
    scanf("%d", &MAX);

    int stack[MAX];             // Declare the stack with given size

    // Menu runs until user chooses option 3
    while (choice != 3) {

        // Display menu options
        printf("\n1. push\n2. pop\n3. exit\n");
        printf("choose your option: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: // Push operation
                // Check if stack is full
                if (TOP == MAX - 1) {
                    printf("stack is overflown\n");
                } else {
                    printf("Enter the value to push: ");
                    scanf("%d", &item);

                    TOP = TOP + 1;    // Move TOP to next position
                    stack[TOP] = item; // Insert item into stack
                }
                break;

            case 2: // Pop operation
                // Check if stack is empty
                if (TOP == -1) {
                    printf("stack underflow\n");
                } else {
                    item = stack[TOP]; // Get the top element
                    TOP = TOP - 1;     // Remove the top element
                    printf("popped element is %d\n", item);
                }
                break;

            case 3: // Exit the program
                printf("Exiting...\n");
                break;

            default:
                printf("Incorrect choice\n");
                break;
        }
    }

    return 0; // End of program
}


*Output:*
Enter the stack size: 3

1. push
2. pop
3. exit
choose your option: 1
Enter the value to push: 13

1. push
2. pop
3. exit
choose your option: 1
Enter the value to push: 46

1. push
2. pop
3. exit
choose your option: 2
popped element is 46

1. push
2. pop
3. exit
choose your option: 3
Exiting...
Code Execution Completed

*Result:*
The program to implement a stack using an array in C and perform push and pop operations was successfully implemented, executed, and the output was Verified.
