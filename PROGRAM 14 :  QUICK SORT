
**AIM** :

To write a C program to sort a list of numbers using the Quick Sort algorithm. The program should take input from the user, apply Quick Sort, and display the sorted array.

** ALGORITHM ** (Quick Sort using Divide and Conquer)
Step 1: Start the program

Step 2: Read the number of elements n

Step 3: Read n elements into the array

Step 4: Call the function quickSort(list, 0, n - 1) 

Step 5:

Quick Sort uses partitioning:

Choose the last element as pivot

Arrange elements so that:

Elements smaller than pivot are on left

Elements greater than pivot are on right

Return the pivot’s correct position

Step 6:

Recursively apply Quick Sort to:

Left side of pivot

Right side of pivot

Step 7: Print the sorted array

Step 8: End the program


 ** PROGRAM **

#include <stdio.h>

// Swap function: swaps the values of two variables using pointers
void swap(int *a, int *b)
{
    int temp = *a;  // Store value of *a temporarily
    *a = *b;        // Assign *b to *a
    *b = temp;      // Assign temporary value to *b
}

// Partition function: places pivot in correct position and 
// arranges smaller elements to its left and larger to its right
int partition(int list[], int low, int high)
{
    int pivot = list[high];   // Choosing last element as pivot
    int i = low - 1;          // Index of smaller element

    // Traverse from 'low' to 'high-1'
    for (int j = low; j < high; j++)
    {
        // If current element is smaller than pivot, swap it
        if (list[j] < pivot)
        {
            i++;              // Move boundary of smaller elements
            swap(&list[i], &list[j]);
        }
    }

    // Place pivot in the correct sorted position
    swap(&list[i + 1], &list[high]);
    return i + 1;             // Return pivot index
}

// Quick Sort function using divide-and-conquer
void quickSort(int list[], int low, int high)
{
    if (low < high)  // Continue only if segment has more than 1 element
    {
        int pi = partition(list, low, high);  // Find pivot position

        // Recursively sort elements before pivot
        quickSort(list, low, pi - 1);

        // Recursively sort elements after pivot
        quickSort(list, pi + 1, high);
    }
}

int main()
{
    int n;

    // Ask user for size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int list[n];   // Declare array of user-defined size

    // Input elements into array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &list[i]);

    // Call Quick Sort on the entire array
    quickSort(list, 0, n - 1);

    // Print the sorted array
    printf("Sorted array (Quick Sort): ");
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);

    return 0;  // End of program
}

**SAMPLE OUTPUT ** :

Enter number of elements: 6

Enter 6 elements:

25 10 5 30 15 20

Sorted array (Quick Sort): 5 10 15 20 25 30

**FINAL RESULT ** :

The program successfully sorts the input list using the Quick Sort algorithm.

It takes user input, applies the divide-and-conquer method to rearrange elements, and outputs the sorted array in ascending order.






































