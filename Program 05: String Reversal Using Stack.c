**5.String reversal using stack:**

*Aim:*
To reverse a string using stack data structure by pushing each character into the stack and then popping them to get the reversed string.

*Algorithm:*
1.Start the program.
2.Read the size of the character stack MAX.
3.Allocate memory for the stack.
4.Read the input string of size MAX.
5.Push operation:
   For each character in the string, push it onto the stack.
6.Pop operation:
   Pop each character from the stack and print it to form the reversed string.
7.Free the allocated memory and end the program.

*Program:*
#include <stdio.h>
#include <stdlib.h>

int TOP = -1, MAX;    // TOP keeps track of the top of the stack, MAX is stack size
char* STACK;          // Dynamic array to store stack characters

// Function to push a character onto the stack
void push(char item) {
    // Check if stack is full
    if (TOP == MAX - 1) {
        printf("STACK IS overflow\n");
    } else {
        TOP = TOP + 1;      // Move TOP to next position
        STACK[TOP] = item;  // Store the character
    }
}

// Function to pop a character from the stack
char pop() {
    char item;

    // Check if stack is empty
    if (TOP == -1) {
        printf("Stack is underflow/empty\n");
        return '\0';        // Return null character if empty
    } else {
        item = STACK[TOP];  // Get the top element
        TOP = TOP - 1;      // Move TOP down
        return item;        // Return popped character
    }
}

// Function to reverse a string using stack
void StringReversal() {
    char string[MAX + 1];   // Temporary array to store input string

    printf("Please enter the string of size %d to reverse: ", MAX);
    scanf("%s", string);    // Read the string from user

    // Push each character of the string onto the stack
    for (int c = 0; string[c] != '\0'; c++) {
        push(string[c]);
    }

    // Pop characters to print the reversed string
    printf("Reversed string: ");
    while (TOP != -1) {
        printf("%c", pop());
    }
    printf("\n");
}

int main() {

    // Ask user for stack size
    printf("Enter the size of CHAR STACK: ");
    scanf("%d", &MAX);

    // Allocate memory dynamically for stack using realloc
    STACK = (char*)realloc(STACK, MAX * sizeof(char));

    // Call function to reverse the string
    StringReversal();

    free(STACK);   // Free dynamically allocated memory

    return 0;       // End of program
}


*Output :*
Enter the size of CHAR STACK: 5
Please enter the string of size 5 to reverse: hello
Reversed string: olleh

Enter the size of CHAR STACK: 4
Please enter the string of size 4 to reverse: test
Reversed string: tset

*Result:*
The program To reverse a string using stack data structure by pushing each character into the stack and then popping them to get the reversed string was successfully implemented, executed, and the output was Verified.
