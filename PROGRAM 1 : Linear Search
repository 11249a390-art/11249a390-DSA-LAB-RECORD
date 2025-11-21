**Aim:**
 To write a C program to Search an element in an array using Linear Search.

**Algorithm:**
1.Start
2.Input the size of the array n.
3.Input the array elements A, A... A[n-1]
4.Input the element to Search, Say key.
5.Set i=0
6.Repeat while i<n:
   If A[i] == key, then print "Element found at position i+1" and stop.
7.If Loop Completed and element not found print "Element not found".
8.Stop.

*program:-*

#include <stdio.h>

int main() {
    int n, key, i, found = 0;

    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int A[n];

    // Input n elements from the user
    printf("Enter %d Elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Ask the user for the element to search in the array
    printf("Enter the element to Search: ");
    scanf("%d", &key);

    // Linear search: check each element one by one
    for (i = 0; i < n; i++) {
        if (A[i] == key) {              // If the current element matches the key
            printf("Element found at position %d\n", i + 1);
            found = 1;                  // Mark as found
            break;                      // Stop searching once found
        }
    }

    // If not found after the loop ends
    if (!found) {
        printf("Element not found\n");
    }

    return 0;   // End of program
}


**output:**
INPUT:
Enter the size of the array: 4
Enter the elements: 1 2 3 4
Enter the element to search: 15
OUTPUT:
Element not found.

*Result:*
The program to Search an element in an array using Linear Search was successfully implemented, executed, and the output was Verified.
