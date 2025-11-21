**6.Infix to Postfix conversion:**

*Aim:*
To convert a given infix expression to a postfix expression using a stack.

*Algorithm:*
1.Initialize an empty stack and empty postfix string.
2.Read the infix expression.
3.For each character in the infix expression:
  1.If it is an operand, append it to the postfix string.
  2.If it is '(', push it to the stack.
  3.If it is ')', pop and append from the stack until '(' is encountered.
  4.If it is an operator, pop and append operators from the stack with higher   or equal precedence, then push the current operator.
4.After scanning all characters, pop and append all remaining operators from the stack.
5.Print the postfix expression.

*Program:*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100   // Maximum size of stack and expressions

char stack[MAX];  // Stack to store operators
int top = -1;     // Top pointer for stack

// Function to check if stack is empty
int isEmpty() {
    return top == -1;
}

// Push an element onto the stack
void push(char item) {
    if (top >= MAX - 1) {         // Check for stack overflow
        printf("stack overflow\n");
        return;
    }
    stack[++top] = item;          // Insert item and increment top
}

// Pop an element from the stack
char pop() {
    if (isEmpty()) {              // Check for underflow
        printf("stack underflow\n");
        return -1;
    }
    return stack[top--];          // Return top element and decrease top
}

// Return the top element without removing it
char peek() {
    if (isEmpty())
        return -1;
    return stack[top];
}

// Function to return precedence of operators
int precedence(char item) {
    if (item == '^')
        return 3;                 // Highest precedence
    else if (item == '*' || item == '/')
        return 2;
    else if (item == '+' || item == '-')
        return 1;
    else
        return 0;                 // For non-operators
}

int main() {

    char infix[MAX], postfix[MAX];
    int i, k = 0;
    char ch, temp;

    // Read infix expression from user
    printf("Enter in-fix Expression: ");
    scanf("%s", infix);

    // Traverse the infix expression character by character
    for (i = 0; i < strlen(infix); i++) {
        ch = infix[i];

        // If character is operand (letter or number), add to postfix
        if (isalnum(ch)) {
            postfix[k++] = ch;
        }

        // If '(' is found, push to stack
        else if (ch == '(') {
            push(ch);
        }

        // If ')' is found, pop until '(' is removed
        else if (ch == ')') {
            while (!isEmpty() && (temp = pop()) != '(')
                postfix[k++] = temp;
        }

        // If operator is found
        else {
            // Pop operators with higher or equal precedence
            while (!isEmpty() && precedence(peek()) >= precedence(ch))
                postfix[k++] = pop();

            // Push current operator to stack
            push(ch);
        }
    }

    // Pop all remaining operators from stack
    while (!isEmpty())
        postfix[k++] = pop();

    postfix[k] = '\0';   // Null terminate the postfix string

    // Display final postfix expression
    printf("Postfix expression: %s\n", postfix);

    return 0;
}

*Output:*
Enter in-fix Expression: A+B*C
Postfix expression: ABC*+

Enter in-fix Expression: (A+B)*C
Postfix expression: AB+C*

Enter in-fix Expression: A*(B+C)/D
Postfix expression: ABC+*D/

*Result:*
The program To convert a given infix expression to a postfix expression using a stack was successfully implemented, executed, and the output was Verified.
